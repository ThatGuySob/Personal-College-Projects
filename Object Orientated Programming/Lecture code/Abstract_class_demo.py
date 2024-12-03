# -*- coding: utf-8 -*-
"""
Created on Sun Oct 13 13:20:36 2024

@author: Asus
"""

#ABC - Abstract Base Classes

from abc import ABC, abstractmethod

class Computer(ABC): #Abstract Class
    @abstractmethod
    def process(self): #Abstract Method
        pass
    

com = Computer()
com.process()

class Laptop(Computer):
    def process(self):
        print("its running")
        
com1 = Laptop()

com1.process()

class Programmer:
    def work(self, com):
        print("Solving Bugs")
        com.process()
        
class Whiteboard:
    def write(self):
        print("Its writing")

prog1 = Programmer()
prog1.work(com1)

com2 = Whiteboard()
prog1.work(com2)