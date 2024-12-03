# CMPU 2016 Object-Oriented Programming
# TU857-2
# 2024-25, Semester 1: Python with Sunder Ali Khowaja
# SunderAli.Khowaja@tudublin.ie
#
# Mystery Adventure Game - Week 1 Lab Solution
# Introduction to Mystery Adventure Game Development
# Setting up the initial game environment and introduction scene
#
# Learning objectives Lab Week 1:
# 1. Understand Basic Python Programming:
#    - Familiarize yourself with the structure of a Python script.
#    - Identify the role of classes and methods in Python code.
# 2. Handle User Input:
#    - Learn to use the input() function to receive user input.
#    - Practice capturing and processing user choices and responses.
# 3. Apply If-Else Statements:
#    - Understand the concept of conditional statements.
#    - Learn to use if-else statements to control program flow based on
#    conditions.
# 4. Enhance User Experience:
#    - Explore techniques to make user interactions more engaging and immersive.
#    - Learn to incorporate descriptive text and narrative elements into your
#    program.
# 5. Modify Menu Options Dynamically:
#    - Understand how to change menu options based on the game's state.
#    - Learn to dynamically adjust user choices to match the game's progression.


class Game:
    """The Game class is set up to manage the game's behavior."""

    def __init__(self):
        self.running = True
        self.game_started = False
        self.door_choice = None

    def run(self):
        """The run method starts the game loop and provides an introduction
        to the game."""

        print("Welcome to 'The Poirot Mystery'")
        print("You are about to embark on a thrilling adventure as a "
              "detective.")
        print("Your expertise is needed to solve a complex case and unveil "
              "the truth.")

        while self.running:
            self.update()

    def update(self):
        """The update method waits for player input and responds to their
        choice to start the game or quit."""

        if not self.game_started:
            player_input = input("Press 'q' to quit or 's' to start: ")
            if player_input.lower() == "q":
                self.running = False
            elif player_input.lower() == "s":
                self.game_started = True
                self.start_game()
        else:
            player_input = input("Press 'q' to quit or 'c' to continue: ")
            if player_input.lower() == "q":
                self.running = False
            elif player_input.lower() == "c":
                self.continue_game()

    def start_game(self):
        """The start_game method introduces the player to the mystery case
        and sets the scene."""

        player_name = input("Enter your detective's name: ")
        print(f"Welcome, Detective {player_name}!")
        print("You find yourself in the opulent drawing room of a grand "
              "mansion.")
        print("As the famous detective, you're here to solve the mysterious "
              "case of...")
        print("'The Missing Diamond Necklace'.")
        print("Put your detective skills to the test and unveil the truth!")

        # Enhanced introduction: Player chooses a door to investigate
        self.door_choice = input("You notice two doors in the room. Enter '1' to "
                            "investigate the left door, '2' for the right "
                            "door: ")
        if self.door_choice == "1":
            print("As you approach the left door, you hear a faint "
                  "whisper... The plot thickens!")
        elif self.door_choice == "2":
            print("You open the right door to reveal a hidden passage... "
                  "What secrets does it hold?")
        else:
            print("You hesitate, not sure which door to investigate first...")

    def continue_game(self):
        print("You continue your investigation, determined to solve the "
              "mystery...")
        if self.door_choice is not None:
            self.running = False
        # Additional game content and interactions could go here

class CrimeScene:
    def __init__(self, door_choice):
        self.running = True
        self.investigated = False
        self.__list_of_clues = []
        self.location = "home"
        self.door_choice = door_choice
        self.add_clue()

    def add_clue(self):
        """Add clues based on the player's door choice."""
        if self.door_choice == "1" and self.investigated == False:
            self.__list_of_clues.append('Faint Whisper')
        elif self.door_choice == "2" and self.investigated == False:
            self.__list_of_clues.append('Hidden Passage')

        if self.investigated:
            self.__list_of_clues.append('broken glass near window')
            self.__list_of_clues.append('an overturned table at crime scene')
            self.__list_of_clues.append('smell of perfume')

    @property
    def clues(self):
        return self.__list_of_clues

    @clues.setter
    def clues(self, new_clue):
        if isinstance(new_clue, str) and new_clue:
            self.__list_of_clues.append(new_clue)

    def run(self):

        while self.running: 
            self.update()


    def update(self):
        """The update method waits for player input and responds to their
        choice to start the game or quit."""

        if self.running:
            player_input = input("Press 'q' to quit, 'c' to continue, 'i' to investigate and 'r' to review clues: ")
            if player_input.lower() == "q":
                self.running = False
            elif player_input.lower() == "c":
                print("You continue your investigation, determined to solve the mystery...")
                self.running = True
            elif player_input.lower() == "i":
                self.running = True
                self.investigate()
            elif player_input.lower() == "r":
                print("Clues: ", self.clues)
                self.continue_game()

    def investigate(self):
        if self.investigated:
            print("Already Investigated this area.")
        else:
            print("You step into the dimly lit crime scene. Broken glass lies near the window,"
              "and a table is overturned")
            print("There's a distinct smell of perfume lingering in the air. The mystery deepens")
        if not self.investigated:
            self.investigated = True
            self.add_clue()


    def continue_game(self):
        print("You continue your investigation, determined to solve the mystery...")

if __name__ == "__main__":
    game = Game()
    game.run()
    if game.door_choice is not None:  # Makes sure a door choice was made
        crime_scene = CrimeScene(game.door_choice)
        crime_scene.run()



