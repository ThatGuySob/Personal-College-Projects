# CMPU 2016 Object-Oriented Programming
# TU857-2
# 2024-25, Semester 1: Python with Sunder Ali Khowaja
# Author: Bartosz Sobiegraj C23398751@mytudublin.ie
# Date: 26/09/2024
#
# Mystery Adventure Game - Week 1 Lab Template
# Introduction to Mystery Adventure Game Development
# Setting up the initial game environment and introduction scene
#
# Learning objectives lab week 1:
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
        # self.running is an instance variable within the Game class
        # This means that when an instance of the Game class is created,
        # the game loop will start running by default as it is set to True.
        self.running = True
        self.count = 0

    def run(self):
        """The run method starts the game loop and provides an introduction to
        the game."""

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
        if self.count == 0:
            player_input = input("Press 'q' to quit or 's' to start: ")
        elif self.count == 1:
            player_input = input("Do you wish to continue?\n"
                                 "'c' to continue or 'q' to Quit: ")

        if player_input.lower() == "q":
            # we exit the game running loop by setting this flag variable
            # to False
            self.running = False
        elif player_input.lower() == "s" and self.count == 0:
            self.count += 1
            self.start_game()

        elif player_input.lower() == "c":
            self.running = True


    def start_game(self):
        """The start_game method introduces the player to the mystery case and
        sets the scene."""
        print("You're walking to your next case, ready for whatever story you may embark on,\n"
              "albeit skeptical of the location, you pull the door handle and enter inside.")
        print("You find yourself in the opulent drawing room of a grand \n"
              "mansion.")
        print("As the famous detective, you're here to solve the mysterious\n"
              "case of...")
        print("'The Missing Diamond Necklace'.\n"
              "Its a family heirloom passed through the generations,")
        print("Put your detective skills to the test and unveil the truth!")
        print("======================================\n"
              "You take a look at your surroundings, not much to look at honestly.\n"
              "In the corner of your eye you notice there are two doors\n"
              "Which one will you choose?")
        self.update()


        player_input = input("Press '1' for the left door or '2' for the right door: ")
        if player_input == "1":
            print("You go to open the door, it doesnt seem to budge much\n"
                  "but upon further investigation you notice its unlocked\n"
                  "You enter what seems to be a storage area which was blocked by boxes from the inside\n"
                  "You notice a small window in the room.\n"
                  "Apart from it all it seems like normal storage")
            self.running = False
        elif player_input == "2":
            print("You go into the kitchen, it seems clean as it is\n"
                  "You walk around to take note of anything worthy\n"
                  "You notice the case that the necklace was stolen from was left in the kitchen\n"
                  "Strangely enough the key is no where to be found\n"
                  "Perhaps the robber took it?")
            self.running = False


if __name__ == "__main__":
    game = Game()
    game.run()
