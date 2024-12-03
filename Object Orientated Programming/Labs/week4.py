# CMPU 2016 Object-Oriented Programming
# TU857-2
# 2024-25, Semester 1: Python with Sunder Ali Khowaja
# SunderAli.Khowaja@tudublin.ie
#
# Mystery Adventure Game - Week 4 Lab Starter File
# Please refer to the lab sheet to understand this week's exercise.
#
# Inheritance and Method Overriding
#
# Learning objectives lab week 4:
# 1. Inheritance:
#    - Understand the concept of inheritance in object-oriented programming,
#      where a new class (subclass) can inherit attributes and methods from an
#      existing class (superclass).
#    - Recognize the benefits of code reuse, extensibility, and organization
#      that inheritance offers.
# 2. Method Overriding:
#    - Learn how to override methods in a subclass to provide specialized
#      behavior while retaining the method signature from the superclass.
#    - Comprehend that method overriding allows for polymorphism, where objects
#      of different classes can be treated uniformly through a common
#      interface.
# 3. Superclass and Subclass Relationship:
#    - Grasp the hierarchical relationship between a superclass and its
#      subclasses.
#    - Understand that subclasses inherit attributes and methods from the
#      superclass, and they can add new attributes and behaviors or modify
#      existing ones.
# 4. Polymorphism:
#    - Explore the concept of polymorphism, which allows objects of different
#      classes to be used interchangeably when they share a common superclass.
#    - Recognize how method overriding contributes to achieving polymorphic
#      behavior.
# 5. Code Modularity and Reusability:
#    - Realize the importance of code modularity and reusability through
#      inheritance.
#    - Discover how designing classes hierarchically can promote the reuse of
#      existing code while allowing for specific customizations when necessary.
# 6. Method Overriding Guidelines:
#    - Understand the guidelines and best practices for method overriding,
#      including maintaining the method signature, providing a meaningful
#      and relevant implementation, and adhering to the
#      Liskov Substitution Principle to ensure the correctness of subclass
#      behavior.
# 7. Encapsulation Preservation:
#    - Recognize the importance of preserving encapsulation while designing
#      subclasses.
#    - Learn how to use access modifiers and property methods to control access
#      to attributes and methods in both superclasses and subclasses.
# 8. Object Interaction:
#    - Realize the implications of method overriding on object interaction.
#    - Understand how the choice of which overridden method to call is
#      determined by the runtime type of the object, enabling dynamic
#      behavior based on the actual object being used.
# 9. Class Hierarchy Design:
#    - Gain experience in designing class hierarchies that effectively
#      represent the relationships between classes.
#    - Consider the "is-a" relationship and use inheritance to model
#      commonalities and differences between classes.

class CrimeScene:
    def __init__(self, location):
        self.location = location
        self.__clues = []
        self.__investigated = False

    @property
    def investigated(self):
        return self.__investigated

    @investigated.setter
    def investigated(self, value):
        if isinstance(value, bool):
            self.__investigated = value
        else:
            print("investigated is expected to be a boolean.")

    def add_clue(self, clue):
        """This method adds clues to the crime scene investigation."""
        self.__clues.append(clue)

    def review_clues(self):
        """At the moment there are no checks on who can see the clues. We
        might need some further protection here."""
        return self.__clues

class Character:
    """ The Character class serves as the base class, providing common
    attributes and methods for characters. The Suspect and Witness classes
    are subclasses that inherit from Character and introduce their unique
    attributes and methods. """

    def __init__(self, name, dialogue):
        self._name = name
        self._dialogue = dialogue
        self._interacted = False

    # if it is not of benefit for the design of the system
    # you do not need to explicitely provide getter and setter
    # methods. Instead, the behavior methods might be sufficient,
    # as I have chosen in this case.
    def interact(self):
        if not self._interacted:
            # notice how the interaction variable is created inside the
            # scope of the if statement. This should be new to you as C
            # experts. C does not allow for such a declaration. If you try
            # to declare the variable outside of the if-else block, if won't
            # be read.
            interaction = f"{self._name}: {self._dialogue}"
            self._interacted = True
        else:
            interaction = f"{self._name} is no longer interested in talking."

        return interaction

    # def has_interacted(self):
    #     return self._interacted

class Suspect(Character):
    """This is a special type of character. This is the suspect in our crime
    investigation."""
    pass # ---- replace this statement with your code ----


class Witness(Character):
    """This class is the witness. This person has either seen or heard
    something to do with the crime."""
    pass # ---- replace this statement with your code ----


class Game:
    """The Game class interacts with the other objects to facilitate game
    play."""

    def __init__(self):
        self.running = True
        self.game_started = False
        self.characters_interacted = False
        self.crime_scene = CrimeScene("Mansion's Drawing Room")

        # new from here:
        self.suspect = Suspect("Mr. Smith", "I was in the library all evening. "
                                            "Confirmed by the butler.")
        self.witness = Witness("Ms. Parker", "I saw someone near the window at the time of the "
                                            "incident."
                                            "Suspicious figure in "
                                            "dark clothing.")

        # we add a few more doors to our game. This changes out the very
        # generic doors from the previous versions. This also makes doors
        # available at all times in the menu options.

        # ---- your door related variables go here ----

    def run(self):
        print("Welcome to 'The Poirot Mystery'")
        print("You are about to embark on a thrilling adventure as a detective.")
        print("Your expertise is needed to solve a complex case and unveil "
              "the truth.")

        while self.running:
            self.update()

    def update(self):
        if not self.game_started:
            player_input = input("Press 'q' to quit or 's' to start: ")
            if player_input.lower() == "q":
                self.running = False
            elif player_input.lower() == "s":
                self.game_started = True
                self.start_game()
        else:
            # this changed a little compared to the previous version. We
            # exchanged the investigate i for i=interact in order to speak
            # to our characters. We also included a general option to check
            # on doors.

            player_input = input("Press 'q' to quit, 'c' to continue, "
                                 "'i' to interact, 'e' to examine clues, "
                                 "'r' to review your clues, "
                                 "or 'doors' to choose a door: ")
            if player_input.lower() == "q":
                self.running = False
            elif player_input.lower() == "c":
                self.continue_game()
            elif player_input.lower() == "i":
                self.interact_with_characters()
            elif player_input.lower() == "e":
                self.examine_clues()
            elif player_input.lower() == "r":
                clues = self.crime_scene.review_clues()
                if clues:
                    print(clues)
                else:
                    print("You have not found any clues yet.")
            elif player_input.lower() == "doors":
                self.choose_door()

    def start_game(self):
        player_name = input("Enter your detective's name: ")
        print(f"Welcome, Detective {player_name}!")
        print("You find yourself in the opulent drawing room of a grand "
              "mansion.")
        print("As the famous detective, you're here to solve the mysterious "
              "case of...")
        print("'The Missing Diamond Necklace'.")
        print("Put your detective skills to the test and unveil the truth!")

    def interact_with_characters(self):
        """The interact_with_characters method within the Game class
        demonstrates the interaction with characters, where each
        character's dialogue and unique actions (e.g., providing an alibi,
        sharing an observation) are
        displayed. """

        pass # ---- replace this line with your code ----

    def examine_clues(self):
        if not self.crime_scene.investigated:
            print("You decide to examine the clues at the crime scene.")
            print("You find a torn piece of fabric near the window.")
            self.crime_scene.add_clue("Torn fabric")
            self.crime_scene.investigated = True
        else:
            print("You've already examined the crime scene clues.")

    def choose_door(self):
        """This method handles the door examination option. User input is
        being handled. The user can make 3 choices: door 1 leads to the
        front door, door 2 leads to the library and door 3 leads to the
        kitchen. Wrong user input is being handled via print outs for error
        handling."""
        pass # ---- replace this line with your code ----


    def continue_game(self):
        print("You continue your investigation, determined to solve the mystery...")


if __name__ == "__main__":
    game = Game()
    game.run()
