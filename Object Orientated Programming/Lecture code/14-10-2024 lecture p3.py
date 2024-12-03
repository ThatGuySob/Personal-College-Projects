from abc import ABC, abstractmethod

class Pokemon(ABC):

    def __init__(self, name, p_type):
        self.name = name
        self.p_type = p_type

    @abstractmethod
    def attack(self):
        pass

    def level(self):
        pass

    def power(self):



class Pikachu:



class Charizard:





