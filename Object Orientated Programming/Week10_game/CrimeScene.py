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
