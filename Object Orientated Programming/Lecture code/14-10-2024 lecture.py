from abc import ABC, abstractmethod

class Computer(ABC):

    @abstractmethod
    def process(self):
        pass

#com = Computer()
#com.process()

class Laptop(Computer):
    def process(self):
        print("It's running")

com1 = Laptop()
com1.process()

class Programmer:
    def work(self, com):
        print("Solving Bugs")
        com.process()

class Whiteboard:
    def Wrote(self):
        print("It's writing")

prog1 = Programmer()
prog1.work(com1)

com2 = Whiteboard()
prog1.work(com2)