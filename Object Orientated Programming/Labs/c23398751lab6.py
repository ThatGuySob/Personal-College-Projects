# CMPU 2016 Object-Oriented Programming
# TU857-2
# 2024-25, Semester 1: Python with Sunder Ali Khowaja
# Student C23398751

from abc import ABC, abstractmethod

class Loggable:
    def __init__(self):
        # Private variable to hold logs
        self._logs = []

    @property
    def logs(self):
        return self._logs  # Getter to access logs

    def log(self, message: str):
        # Method to log a message
        self._logs.append(message)
        
        
                    




class CrimeScene: #crime scene class defined
    def __init__(self, location):
        self.investigated = False #making sure it checks if scene was investigated
        self.__list_of_clues = [] #list for potential clues
        self.location = location #location of the mystery

    def add_clue(self, clue):  # Method to add a clue to the crime scene
        # Ensure the clue is not already in the list before adding it
        if clue not in self.__list_of_clues:
            self.__list_of_clues.append(clue)
        else:
            print(f"Clue '{clue}' has already been found.")  # Optional: Give feedback if clue is a duplicate

    @property #getter decorator for accessing hidden list
    def clues(self):
        return self.__list_of_clues

    @clues.setter #setter decorator for writing into the hidden list
    def clues(self, new_clue):
        if isinstance(new_clue, str) and new_clue:
            self.__list_of_clues.append(new_clue)

    def investigate(self): #checking if user has investigated
        if self.investigated:
            print("Already Investigated this area.")

        else:
            self.investigated = True

class Character(ABC): #class for talking to characters

    def __init__(self, name, dialogue): #method for if the character has been talked to, name and dialogue
        self._name = name
        self._dialogue = dialogue
        self._interacted = False

    @abstractmethod
    def perform_action(self, crime_scene):  # Declare an abstract method
        pass  # This will be implemented in subclasses

    def interact(self):

        if not self._interacted: ##checks if the character was talked to
            interaction = f"{self._name}: {self._dialogue}"
            self._interacted = True
        else:
            interaction = f"{self._name} is no longer interested in talking."

        return interaction

class Suspect(Character):

    def __init__(self, name, dialogue, alibi):
        super().__init__(name, dialogue)
        self.alibi = alibi
        self.has_provided_alibi = False  # Track if the alibi has been provided

    def perform_action(self, crime_scene):
        return self.provide_alibi(crime_scene)

    def provide_alibi(self, crime_scene):
        if not self.has_provided_alibi:  # check if the alibi has already been given to us
            clue = f"{self._name}'s Alibi: {self.alibi}"
            crime_scene.add_clue(clue)
            self.has_provided_alibi = True  # marking flag that this cant be used
            return clue
        return f"{self._name} has already provided their alibi."


class Witness(Character):
    #this class represents a witness in the crime investigation.
    def __init__(self, name, dialogue, observation):
        super().__init__(name, dialogue)  #calls the parent class's
        self.observation = observation  #unique attribute for witnesses
        self.has_shared_observation = False


    def perform_action(self, crime_scene):
        return self.share_observation(crime_scene)  # Implementing the abstract method

    def share_observation(self, crime_scene):
        if not self.has_shared_observation:  # check if the alibi has already been given to us
            clue = f"{self._name}'s Observation: {self.observation}"
            crime_scene.add_clue(clue)
            self.has_shared_observation = True  # marking flag that this cant be used
            return clue
        return f"{self._name} has already shared their observation."


class NPC(Character):
    # npcs to give the character more context clues
    def __init__(self, name, dialogue, personality):
        super().__init__(name, dialogue)
        self.personality = personality #defines the personality used later on

    def perform_action(self, crime_scene):
        if self.personality == "friendly":
            return f"{self._name} smiles warmly and says, '{self._dialogue}'" #allows for friendly npc
        elif self.personality == "hostile":
            return f"{self._name} glares at you and retorts, '{self._dialogue}'" #allows for indifferent npc
        elif self.personality == "indifferent":
            return f"{self._name} shrugs and says, '{self._dialogue}'" #allows for angry npc


class Game:
    """The Game class is set up to manage the game's behavior."""

    def __init__(self):
        self.door_choice = None #check if a door was chosen
        self.running = True #makes sure the game runs
        self.game_started = False #if character started the game
        self.clue_count = 0
        self.crime_scene = CrimeScene("Mansion's Drawing Room") #sets location of the scene

        # Create an instance of Loggable for logging events
        self.log = Loggable()
        
        # suspect and witness name and dialogues
        self.suspect = Suspect("Mr. Smith", "I was in the library all evening. "
                               "Confirmed by the butler.", "The butler saw them")
        self.witness = Witness("Ms. Parker", "I saw someone near the window at the time of the "
                               "incident."
                               "Suspicious figure in "
                               "dark clothing.", "is suspicious of Mr.Smith")

        # creating npcs and their dialogues
        self.npcs = \
        [
            NPC("Mr. Brown", "I just want to finish cleaning and go home, leave me alone.", "indifferent"),
            NPC("Ms. Evans", "Oh, what a lovely day! Can I offer you a drink?", "friendly"),
            NPC("Mr. King", "What do you want? Can't you see I'm busy?", "hostile"),
        ]

    def run(self):
        """The run method starts the game loop and provides an introduction
        to the game."""
        self.log.log("Game started")  # Log the start of the game
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

        if not self.game_started: #checks if user wants to continue
            player_input = input("Press 'q' to quit or 's' to start: ")
            if player_input.lower() == "q":
                self.running = False
                self.log.log("Player quit the game")  # Log when player quits
            elif player_input.lower() == "s":
                self.game_started = True
                self.start_game()
        else: #if user chooses to continue they get more options
            player_input = input("Press 'q' to quit, 'c' to continue, "
                                 "'i' to interact, 'e' to examine clues, "
                                 "'r' to review clues, "
                                 "or 'doors' to choose a door: ")
            if player_input.lower() == "q": #quits game
                self.running = False
                self.log.log("Player quit the game")  # Log quit event
            elif player_input.lower() == "c": #continues game
                self.log.log("Player continued investigation")  # Log continue event
                print("You continue your investigation, determined to solve the mystery...")
            elif player_input.lower() == "e": #examines clues
                self.clue_count = 1
                self.examine_clues()
                # Allow door clue additions after clues have been examined
                self.crime_scene.investigated = False  # Reset investigation state after examining clues
            elif player_input.lower() == "r": #reviews clues list
                if self.clue_count <= 0:
                    print("You have not found any clues yet.")
                else:
                    print("Clues:", self.crime_scene.clues)
                self.continue_game()
            elif player_input.lower() == "i": #interacts with characters
                self.clue_count = 1
                self.interact_with_characters()
            elif player_input.lower() == "doors": #chooses a door
                self.clue_count = 1
                self.choose_door()

    def start_game(self):
        """The start_game method introduces the player to the mystery case
        and sets the scene."""

        player_name = input("Enter your detective's name: ") #username
        print(f"Welcome, Detective {player_name}!")
        print("You find yourself in the opulent drawing room of a grand "
              "mansion.")
        print("As the famous detective, you're here to solve the mysterious "
              "case of...")
        print("'The Missing Diamond Necklace'.")
        print("Put your detective skills to the test and unveil the truth!")

    def interact_with_characters(self): #method for interacting with witnesses and suspects
        print("You choose to interact with the characters.")
        print("1. Talk to the Suspect: Mr. Smith")
        print("2. Talk to the Witness: Ms. Parker")
        print("3. Interact with Workers")
        choice = input("Select a character (1,2 or 3): ")

        if choice == "1": #choice for who to talk to
            interaction = self.suspect.interact()
            print(interaction)
            interaction = self.suspect.perform_action(self.crime_scene)
            self.log.log(f"Player interacted with {self.suspect._name}")  # Log character interaction
            print(interaction)

        elif choice == "2":
            interaction = self.witness.interact()
            print(interaction)
            interaction = self.witness.perform_action(self.crime_scene)
            self.log.log(f"Player interacted with {self.witness._name}")  # Log character interaction
            print(interaction)

        elif choice == "3": #speaking to the npc's 
            print("You choose to interact with the Workers.")
            for npc in self.npcs:
                self.log.log(f"Player interacted with {npc._name}")  # Log NPC interaction
                print(npc.perform_action(self.crime_scene))

        else:
            print("Invalid choice. Please select 1, 2 or 3.") #error checking

    def examine_clues(self):
        if not self.crime_scene.investigated:
            self.log.log("Player examined the crime scene")  # Log clue examination
            print("You decide to examine the clues at the crime scene.")
            print("You find a torn piece of fabric near the window.")
            if 'Torn fabric' not in self.crime_scene.clues:  # Prevent duplicate clue
                self.crime_scene.add_clue('Torn fabric')
                self.crime_scene.investigated = True  # Mark scene as investigated
            else:
                print("The torn fabric has already been found.")
        else:
            print("You've already examined the crime scene clues.")

    def choose_door(self): #method for choosing a door
        self.door_choice = input("You decide to choose a door to investigate. \n"
                                 "1. front door\n"
                                 "2. library door\n"
                                 "3. kitchen door\n"
                                 "Enter the number of the door you want to investigate: ")
        if self.door_choice == "1":
            if 'Faint Whisper' not in self.crime_scene.clues:
                self.crime_scene.add_clue('Faint Whisper')
                self.log.log("Player chose to investigate the front door")  # Log door choice
                print("As you approach the front door, you hear a faint whisper... The plot thickens!")
            else:
                print("You already found a clue at the front door.")

        elif self.door_choice == "2":
            if 'Hidden Passage' not in self.crime_scene.clues:
                self.crime_scene.add_clue('Hidden Passage')
                self.log.log("Player chose to investigate the library door")  # Log door choice
                print("You open the door to the library to reveal a hidden passage inside... What secrets does it hold?")
            else:
                print("You already found a clue at the library door.")

        elif self.door_choice == "3":
            if 'Potential Murder Weapon' not in self.crime_scene.clues:
                self.crime_scene.add_clue('Potential Murder Weapon')
                self.log.log("Player chose to investigate the kitchen door")  # Log door choice
                print("You open the kitchen door to inspect its contents, a knife has some residue... Is the murderer still with us?")
            else:
                print("You already found a clue at the kitchen door.")

        if self.door_choice == "1" and not self.crime_scene.investigated:
            self.crime_scene.add_clue('Faint Whisper')
        elif self.door_choice == "2" and not self.crime_scene.investigated:
            self.crime_scene.add_clue('Hidden Passage')
        elif self.door_choice == "3" and not self.crime_scene.investigated:
            self.crime_scene.add_clue('Potential Murder Weapon')

        else:
            print("Invalid choice. Please enter 1, 2, or 3.") # error checking

        if self.door_choice in ["1", "2", "3"] and not self.crime_scene.investigated:
            self.crime_scene.investigated = True


    def continue_game(self):
        print("You continue your investigation, determined to solve the "
              "mystery...")
        self.log.log("Player continued investigation")
        
        # Additional game content and interactions could go here

if __name__ == "__main__": #calling the game itself
    game = Game()
    game.run()

# Using the logger to print out game logs
    print("\nGame Logs:")
    for log in game.log.logs:
        print(log)