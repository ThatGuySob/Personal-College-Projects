from abc import ABC, abstractmethod

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
