# CMPU 2016 Object-Oriented Programming
# TU857-2
# 2024-25, Semester 1: Python with Sunder Ali Khowaja
# SunderAli.Khowaja@tudublin.ie
#
# Python Cheat Sheet
# This file presents an overview of all the Python learning of semester 1
# as part of the OOP class.
# As part of the brightspace module you also find relevant quizzes to
# test your knowledge of Python and OOP.

# ...
# --- Python Basic Language Overview ---
# ...

# ...
# print statement: The print() statement in Python is like a way to talk to
# your computer and make it show something on the screen. It's like writing
# a message that the computer will display.
#
# For example, if you write print("Hello, World!"), the computer will show the
# words "Hello, World!" on the screen.
# It's a quick and easy way to see what's happening in your program and share
# messages with yourself or anyone using the program. You can also put
# numbers or other things inside the print() to show them on the screen.
print("Hello, World!")

# ...
# variables and data types: Imagine variables in Python like containers where
# you can store different types of things. Each container has a label (the
# variable name) that helps you remember what's inside.
#
# For example, think of a variable called name. You can put your name in it
# like this: name = "Alice". Now, whenever you use the word name,
# the computer knows you mean "Alice".
#
# And just like you have different types of things in real life, like words,
# numbers, and yes/no choices, Python has different types of data. These
# types are like categories for your variables:
#
# Strings: These are words or text, like your name: "Alice".
# Numbers: There are two main types: whole numbers (integers) like 10 and
# decimal numbers (floating-point numbers)
# like 3.14.
# Booleans: These are like yes/no choices. True means yes, and False means no.
#
# So, when you say name = "Alice", Python knows you're storing a string in the
# name container. And when you write age = 25, Python knows you're storing a
# number in the age container.
#
# Remember, variables help you keep track of different pieces of information
# in your programs!
name = "Alice"
age = 25
height = 5.8
is_student = True

# ...
# user input: Python's user input is like talking to your computer and asking
# it questions. You can ask the computer for information and it will wait
# for you to type something in.
#
# Imagine you're having a conversation with the computer. You can use the
# input() function to ask a question. For example, if you write name =
# input("What's your name? "), the computer will show your question
# ("What's your name?") and wait for you to type an answer.
#
# When you type your answer and press Enter, the computer will store your
# answer in the name variable. So, if you type "Alice", the computer will
# remember that your name is Alice and store it in the name container.
#
# This way, you can ask questions to your program and get answers from
# yourself or anyone using the program. It's like having a chat with your
# computer!
name = input("Enter your name: ")
print("Hello, " + name)

# ...
# arithmetic operations: Python's arithmetic operations are like math you do
# with your computer. Just like you can add, subtract, multiply, and divide
# numbers on paper, you can do the same in Python.
#
# Addition (+): It's like counting how many things you have when you put them
# together. For example, 2 + 3 means adding 2 and 3, which equals 5.
#
# Subtraction (-): It's like figuring out the difference between two numbers.
# For example, 7 - 4 means subtracting 4 from 7, which equals 3.
#
# Multiplication (*): It's like adding a number multiple times. For example,
# 5 * 3 means adding 5 three times, which equals 15.
#
# Division (/): It's like sharing something equally. For example, 10 / 2 means
# dividing 10 into 2 equal parts, which gives you 5.
#
# You can use these operations to do math in your Python programs. Just like
# you solve math problems on paper, Python helps you solve them on your
# computer!
x = 10
y = 5
sum_result = x + y
difference = x - y
product = x * y
quotient = x / y

# ...
# if statement: The Python if statement is like making a decision with your
# computer. It's a way to tell the computer, "If something is true, do this;
# otherwise, do something else."
# Imagine you're deciding whether to go outside. If it's sunny, you'll go out
# to play; if it's not sunny, you might stay inside. Here's how the if
# statement works:
weather = "sunny"

if weather == "sunny":
    print("Let's go outside and play!")
else:
    print("Let's stay inside and have fun!")

# Output: Let's go outside and play! In this example, the computer checks if
# the weather is "sunny". If it's true, it follows the instructions under
# if. If it's not true, it follows the instructions under else.
#
# So, the if statement helps the computer decide what to do based on certain
# conditions. It's like giving your computer a set of rules to follow!
#
# let's expand on the weather example and include the elif
# (short for "else if") statement:
weather = "cloudy"

if weather == "sunny":
    print("Let's go outside and play!")
elif weather == "cloudy":
    print("Let's go for a walk.")
else:
    print("Let's stay inside and have fun!")

# Output: Let's go for a walk. In this example, the computer checks the
# weather variable. If it's "sunny", it follows the instructions under the
# if block. If not, it checks the next condition using elif. If that condition
# is true, it follows the instructions under the elif block. If none of the
# conditions are true, it follows the instructions under the else block.
#
# The elif lets the computer check multiple conditions one after another.
# It's like having more options to choose from when making a decision.

# ...
# logical operators: Python's logical operators are like tools to help you
# make decisions by combining different conditions. They help you figure out
# if something is true or false based on multiple situations.
#
# Here are the three main logical operators:
#
# AND: It's like putting two conditions together and both must be true for the
# whole thing to be true. For example, if you need both sunny weather and
# free time to go to the park, you'd use and.
#
# OR: It's like having options and as long as one of the conditions is true,
# the whole thing is true. For example, you might eat ice cream if it's hot
# outside OR if you're celebrating.
#
# NOT: It's like flipping a switch. If something is true, not makes it false,
# and if it's false, not makes it true. It's like changing your mind!
#
# Here's a simple example to show how they work:
sunny = True
free_time = False

if sunny and free_time:
    print("Let's go to the park!")
elif sunny or free_time:
    print("Let's do something fun!")
else:
    print("Let's stay home.")
# In this example, if sunny is True and free_time is False, the and condition
# isn't met. But because at least one of them is true (sunny), the or
# condition is met, and it prints "Let's do something fun!"
#
# So, logical operators help you make decisions based on different situations,
# just like choosing what to do depending on the weather and your plans!

# ...
# for loop: A Python for loop is like having a helper that does something over
# and over again. It's like telling your computer, "Hey, do this thing
# multiple times."
#
# Imagine you're counting from 1 to 5. Instead of writing it out five times,
# you can use a for loop. Here's how it works:
for num in range(1, 6):
    print(num)
# In this example, the for loop starts at 1 and goes up to
# (but doesn't include) 6. It does the same thing five times: it takes a
# number, puts it in the number container, and then does whatever you tell
# it to do (in this case, printing the number).
#
# So, a for loop helps you save time by repeating a task without writing the
# same code again and again. It's like having a little helper that does the
# work for you!
#
# In this example you also see the built-in Python range(...) function.
# The range() function in Python is like a helper that gives you a sequence
# of numbers. It's like having a list of numbers that you can use for different
# things, like counting or looping.
#
# When you use range(), you give it a starting number, an ending number,
# and an optional step (how much to count by). It then gives you a sequence
# of numbers from the starting number up to (but not including) the ending
# number.
#
# For example:
#
# range(1, 6) gives you the sequence 1, 2, 3, 4, 5. range(2, 11, 2)
# gives you 2, 4, 6, 8, 10. You can use this sequence with loops, like the
# for loop we talked about earlier. It's like having a conveyor belt of
# numbers that you can use for your programs!

# ...
# while loop: A Python while loop is like a persistent helper that keeps
# doing something until a certain condition is no longer true. It's like
# telling your computer, "Keep doing this until something changes."
#
# Imagine you're jumping rope. You might keep jumping as long as you're not
# tired. A while loop works in a similar way:
count = 0
while count < 5:
    print(count)
    count += 1

# In this example, the while loop keeps running as long as the condition
# count < 5 is true. It starts with count at 0 and keeps adding 1 each time.
# It prints the number and then checks if count is still less than 5. When
# count becomes 5, the condition is no longer true, and the loop stops.
#
# So, a while loop helps you keep doing something repeatedly until a certain
# condition changes. It's like having a helper who keeps going until you
# say, "Stop!"

# ...
# lists: Python lists are like your own mini-collection of things. Imagine
# having a list of your favorite toys. Each toy has a number to help you
# find it quickly.
#
# In Python, a list is a way to store multiple pieces of information together.
# You can put words, numbers, or anything you want into a list. Here's how
# it works:
fruits = ["apple", "banana", "cherry"]

# In this example, fruits is a list that holds three words. You can access
# each item in the list using a number, starting from 0. So, fruits[0] is
# "apple", fruits[1] is "banana", and so on.
#
# You can also add or remove things from a list, change items, and do lots
# of other cool stuff. It's like having a container that can hold many
# things at once, and you can arrange them however you like!
#
# basic list operations:
# Accessing items in the list
print(fruits[0])  # Output: apple

# Changing an item in the list
fruits[1] = "orange"
print(fruits)  # Output: ['apple', 'orange', 'cherry']

# Adding an item to the end of the list
fruits.append("grape")
print(fruits)  # Output: ['apple', 'orange', 'cherry', 'grape']

# Removing an item from the list
fruits.remove("apple")
print(fruits)  # Output: ['orange', 'cherry', 'grape']

# Checking if an item is in the list
if "banana" in fruits:
    print("Yes, we have bananas!")
else:
    print("No bananas here.")

# Getting the number of items in the list
num_fruits = len(fruits)
print("Number of fruits:", num_fruits)
#
# Here's what each operation does:
#
# Accessing: You can use the index (position) inside square brackets to get
# the item at that position in the list.
# Changing: You can change an item in the list by assigning a new value to
# its index.
# Appending: You can add a new item to the end of the list using the append()
# method.
# Removing: You can remove an item from the list using the remove() method.
# Checking: You can check if an item is in the list using the in keyword.
# Getting Length: You can find out how many items are in the list using the
# len() function.
# These basic list operations make lists really flexible and useful for
# storing and managing collections of data!

# for loop with lists: Using Python's for loops with lists is like looking at
# each item in a list and doing something with it. It's like going through
# your toy collection and playing with each toy one by one.
#
# Here's how it works using our fruits list example:
fruits = ["apple", "banana", "cherry"]

for fruit in fruits:
    print("I love", fruit + "s!")

# Output:
# I love apples!
# I love bananas!
# I love cherries!

# In this example, the for loop takes each fruit from the fruits list and puts
# it into the fruit variable. Then, it does whatever you tell it to with
# each fruit.
#
# So, using for loops with lists helps you do something with each item in the
# list without needing to write the same code for each one. It's like a
# helpful way to go through a bunch of items one at a time!
#
# enumerate(): enumerate() pairs each element of the list with its
# corresponding index while iterating through the list in a for loop. Here's
# a simple example of a for loop with enumerate():
fruits = ["apple", "banana", "cherry", "date"]

# Using a for loop to iterate over the list
for fruit in fruits:
    print(fruit)

# Explanation: In this example, we have a list called fruits containing
# different fruit names. We want to print each fruit name one by one using a
# for loop.
#
# Here's what's happening:
#
# The for loop starts with the line for fruit in fruits:.
# The loop runs through each element in the fruits list, one at a time.
# Inside the loop, the variable fruit takes on the value of each item in the
# list during each iteration. The print(fruit) statement prints the value of
# the fruit variable, which is the current fruit name.
# So, when you run this code, it will print each fruit name in the fruits
# list one by one.
#
# Now, let's use enumerate() to also show the index of each fruit:
fruits = ["apple", "banana", "cherry", "date"]

# Using enumerate to get both index and value
for index, fruit in enumerate(fruits):
    print(f"Index {index}: {fruit}")
#
# Here, we've added enumerate() to the loop to get both the index and the value
# of each fruit in the list.
#
# enumerate(fruits) returns pairs of (index, fruit) for each item in the fruits
# list. The for loop assigns both the index and fruit values during each
# iteration. Inside the loop, we use f-strings to print both the index and the
# fruit name. When you run this code, it will print each fruit name along with
# its corresponding index in the fruits list. This is a handy way to keep
# track of where each item is located in the list!
#
# Notice how this is different to for loops in C that you've learnt last year!
# In Python, for loops work directly with the elements of a collection (like
# a list), making it easier to go through each item without needing to worry
# about the loop counter or the loop's end condition, as you do in C, where you
# do need to keep track of the loop counter, and you can access the element
# only if you have the loop counter. This is why we need
# enumerate() in Python, as it's the only way to access that loop index.

# ...
# transfer statements:
# 1. Break:
#
# The break statement is like a "stop" button for loops. When you use break
# inside a loop, the loop immediately stops running, even if there are more
# iterations left. It's like saying "I'm done, let's get out of here!"
fruits = ["apple", "banana", "cherry", "date"]

for fruit in fruits:
    if fruit == "banana":
        break  # Stops the loop if the fruit is "banana"
    print(fruit)

# In this example, the loop starts going through the list of fruits. When it
# finds "banana", the break statement is triggered, and the loop stops
# completely. So, only "apple" is printed.
#
# 2. Continue:
#
# The continue statement is like a "skip" button for loops. When you use
# continue inside a loop, it jumps to the next iteration right away,
# ignoring any code below it for that specific iteration. It's like saying
# "Skip this one and go to the next!"
#
# Example:
fruits = ["apple", "banana", "cherry", "date"]

for fruit in fruits:
    if fruit == "banana":
        continue  # Skips printing "banana"
    print(fruit)

# In this example, when the loop encounters "banana", the continue statement
# makes it jump to the next iteration. So, "banana" is skipped, and the loop
# continues with the other fruits.
#
# 3. Pass:
#
# The pass statement is like a "do nothing" command. It's used when you need
# something in the code to fulfill a requirement (like an empty function or
# a placeholder), but you don't want it to do anything specific. It's like
# saying "Don't worry about this for now, just move on."
#
# Example:
for i in range(5):
    pass  # Doesn't do anything, just keeps the loop running

# In this example, the loop runs five times, but the pass statement inside it
# doesn't affect the loop's behavior. It's just there to keep the loop
# structure intact.
#
# These statements can be really helpful in controlling the flow of your code
# within loops!

# ...
# functions: Python functions are like mini-programs that you can use over and
# over again. They're like having a helper who knows how to do a specific
# task, and you can ask them to do it whenever you need.
#
# Imagine you have a recipe for making a sandwich. Instead of explaining the
# steps every time, you can write them down as a recipe and follow it
# whenever you want. Python functions work in a similar way:
#
# Here's a simple function:
def greet():
    print("Hello, world!")

greet()  # Output: Hello, world!
# Here, the greet() function doesn't need any information (arguments) and
# doesn't return anything. It just prints a message.

# Here's a simple function with a return value:
def greet():
    greeting = "OOP is great!"
    return greeting

message = greet()
print(message)  # Output: OOP is great!
# Here, the greet() function doesn't need any information (arguments), but it
# has a return value. The message is now handed to a variable. Then,
# the variable is printed.

# Here's a function that receives information from the outside via a
# function argument:
def greet(name):
    print("Hello, " + name + "!")

greet("Alice")  # Output: Hello, Alice!
greet("Bob")    # Output: Hello, Bob!

# Here's a function that receives inforamtion from the outside via a function
# argument and has a return value:
def greet(name):
    greeting = "Hello, " + name + "!"
    return greeting

message = greet("Alice")
print(message)  # Output: Hello, Alice!

message = greet("Bob")
print(message)  # Output: Hello, Bob!
# In this example, the greet() function takes an argument (name), creates a
# greeting message, and returns it. Then, you store the returned message in
# the message variable and print it. This shows how you can use the result of a
# function (return value) in different parts of your program!

# ...
# importing modules: Importing modules in Python is like borrowing tools from a
# toolbox to use in your project. Imagine you're building something and need
# a hammer. Instead of making a new hammer, you can borrow one from your
# toolbox.
#
# In Python, modules are like toolboxes full of useful code that other people
# have already written. You can use these modules to do things without
# starting from scratch. Here's how it works:
#
# Let's say you want to use some math functions:
import math

print(math.sqrt(25))  # Output: 5.0
# In this example, you're borrowing the math module's tools to use the sqrt()
# function. You don't need to know how sqrt() works inside; you can just use
# it to calculate the square root of a number.
#
# So, importing modules is like grabbing tools from a toolbox to help you with
# specific tasks in your Python programs!
#
# There are indeed several basic Python libraries that provide essential
# functions. Here are a few commonly used ones at a foundational level:
#
# random: This library provides functions for generating random numbers,
# making games, simulations, and more.
#
# math: Offers a wide range of mathematical functions and constants for various
# calculations.
#
# time: Provides functions to work with time-related operations, such as
# measuring execution time, adding delays, and more.
#
# os: Allows you to interact with the operating system, providing functions for
# working with files, directories, and running commands.
#
# sys: Provides access to some variables used or maintained by the Python
# interpreter, and functions that interact strongly with the interpreter.
#
# datetime: Useful for working with dates and times, including creating,
# parsing, and formatting dates.
#
# json: Used for working with JSON (JavaScript Object Notation) data, which is
# a common data interchange format.
#
# csv: Helps with reading from and writing to CSV (Comma-Separated Values)
# files, which are commonly used for storing tabular data.
#
# urllib: Used for opening URLs, reading data from URLs, and making HTTP
# requests.
#
# re: Provides support for working with regular expressions, which are used for
# pattern matching and text manipulation.
#
# sys: Provides functions and variables that interact with the Python
# interpreter, such as command-line arguments and environment variables.
#
# These libraries are included with Python by default and are often used in
# many different types of projects. They provide essential functionalities
# for a wide range of programming tasks.

# ...
# reading from a file: Reading from a file in Python is like opening a book and
# looking at what's written inside. You can read the words and understand
# the story. In programming, you do something similar with files.
#
# Here's a simple explanation:
#
# Opening the File: Imagine you have a file on your computer with some
# information. You tell Python which file you want to read.
#
# Reading the Content: Python opens the file and lets you read its content,
# just like you'd read the words in a book. You can read one line at a time
# or the entire content.
#
# Using the Content: Once you've read the content, you can use it in your
# program. For example, you might process the information, display it,
# or do calculations with it.
#
# Here's a basic example:
# Opening the file
file = open("my_file.txt", "r")  # "r" means read mode

# Reading and using the content
content = file.read()
print("File content:", content)

# Closing the file: Remember, just like you'd close a book when you're done
# reading, it's important to close the file after you're done using it.
file.close()

# ...
# writing to a file: Writing to a file in Python is like taking a blank piece
# of paper and writing down your thoughts or a story. You can create a new
# file, write information in it, and save your work.
#
# Here's a simple explanation:
#
# Creating or Opening the File: First, you tell Python that you want to create
# a new file or open an existing one for writing.
#
# Writing Content: You can write text or data to the file, just like you'd
# write with a pen on paper. You can write one line at a time or multiple
# lines.
#
# Saving the File: After writing your content, you save the file. Think of it
# like putting your paper in a drawer to keep it safe.
#
# Here's a basic example:
# Creating or opening the file for writing
file = open("my_notes.txt", "w")  # "w" means write mode

# Writing content to the file
file.write("These are my thoughts for today.\n")
file.write("I'm learning Python programming.\n")

# Closing and saving the file: It's important to remember to close the file
# after you're done writing, just like you'd put your pen down and keep your
# writing safe.
file.close()
#
# If you don't close a file after you're done using it, it can lead to various
# issues and unexpected behaviors in your program. Here are some potential
# problems that can occur:
#
# Resource Leak: Each time you open a file, the operating system allocates
# resources to manage the file, including memory. If you don't close the
# file, these resources won't be released properly, leading to a resource
# leak. Over time, this can slow down your program and even cause it to crash
# if you open too many files without closing them.
#
# Data Loss: When you write to a file, the data you write is often buffered in
# memory before being physically written to the file on disk. If you don't
# close the file properly, the buffered data may not get written to the file,
# resulting in data loss.
#
# Locking: Some operating systems and file systems impose locks on open files.
# If you don't close a file, it might remain locked, preventing other
# processes or programs from accessing or modifying it.
#
# File Corruption: If you're writing to a file and don't close it properly,
# the file might not be properly closed, causing data corruption. This is
# especially important when working with important data files.
#
# Unexpected Behavior: If you leave a file open and then try to open it again
# in your program, you might encounter unexpected behavior or errors because
# the file is still in use.
#
# To avoid these issues, it's good practice to always close files after you're
# done using them. You can use the close() method or use the with statement,
# which automatically closes the file when you're done with it:
with open("my_file.txt", "r") as file:
    content = file.read()
# File is automatically closed when the block is exited



# ...
# --- OOP Starts Here ---
# ...

# ... Class Definition
# A class in Python is like a blueprint or a template
# for creating something. It defines how that thing should look and what it
# can do. It's like having a recipe for making cookies – it tells you the
# ingredients you need and the steps to follow to create the cookies. In
# Python, a class lets you create objects that have certain characteristics
# (called attributes) and can perform specific actions (called methods),
# making it easier to organize and work with your code.
class ClassName:
    def __init__(self, attribute1, attribute2):
        self.attribute1 = attribute1
        self.attribute2 = attribute2

    def method(self):
        # Method code here
        pass


# ... Creating Objects
# Creating objects in Python is like making things from
# a class blueprint. Think of a class as a mold for creating different
# objects that share similar qualities. To make an object, you use the class
# name followed by parentheses, like calling a recipe. This tells Python to
# create a new thing based on the class instructions. Once the object is
# made, you can use its attributes and methods to do specific things,
# just like following the steps in a recipe to bake cookies.
attribute1_value = 1
attribute2_value = 'x'

obj = ClassName(attribute1_value, attribute2_value)

# ... Encapsulation
# Encapsulation in Python is like putting things in a box
# to keep them safe and organized. It's a way to hide the details of how
# something works so you can use it without knowing all the inner workings.
# Imagine a toy with buttons – you don't need to know how the buttons work
# inside; you just press them to make the toy do things. In Python,
# encapsulation means bundling data (attributes) and actions (methods)
# together in a class, so you can use them easily without worrying about the
# complicated stuff happening inside.
class Example:
    def __init__(self):
        self._protected_var = 42  # Protected attribute
        self.__private_var = 100  # Private attribute

    def public_method(self):
        # Accessing private and protected attributes
        print(self._protected_var)
        print(self.__private_var)

obj = Example()
obj.public_method()

# Example of encapsulation with the decorator notation in Python
class BankAccount:
    def __init__(self, account_number, balance):
        self.__account_number = account_number
        self.__balance = balance

    @property
    def account_number(self):
        return self.__account_number

    @account_number.setter
    def account_number(self, value):
        self.__account_number = value

    @property
    def balance(self):
        return self.__balance

    def deposit(self, amount):
        if amount > 0:
            self.__balance += amount
            print(f"Deposited ${amount}. New balance: ${self.__balance}")
        else:
            print("Invalid deposit amount.")

    def withdraw(self, amount):
        if 0 < amount <= self.__balance:
            self.__balance -= amount
            print(f"Withdrew ${amount}. New balance: ${self.__balance}")
        else:
            print("Insufficient funds.")


# Creating an object
account = BankAccount("123456789", 1000)

# Accessing encapsulated variables using decorators
print("Account Number:", account.account_number)
print("Balance:", account.balance)

account.account_number = "333666999"
print("New account Number:", account.account_number)

# Trying to access private variables directly will raise an AttributeError
# print(account.__account_number)
# print(account.__balance)
#
# In this example, the BankAccount class encapsulates the account number and
# balance as private variables using double underscores (__). The @property
# decorator is used to create getter methods (account_number and balance)
# that allow controlled access to these private variables from outside the
# class. This way, you can access the encapsulated data through methods,
# ensuring proper encapsulation and control over data access. You also see a
# how the decorator can be used to set an account number. Without a setter a
# private variable cannot be changed by an object instance. Each time you
# design a class you need to discern if you want to allow write access on
# your variables. This is a case-by-case decision.

# ... Inheritance
# Inheritance in Python is like sharing and passing on
# traits from one thing to another. Imagine you have a toy car and a toy
# truck. The car and truck have some things in common, like wheels and a
# color. Inheritance lets you create a new toy (like a toy van) that starts
# with the same features as the car or truck. It's like the new toy inherits
# traits from the old ones. In Python, you can make a new class that's based
# on an existing class. This new class automatically gets all the
# characteristics (attributes and methods) of the original class, and you
# can add or change things to make it different.
class Parent:
    def method(self):
        print("Parent method")

class Child(Parent):
    def method(self):
        print("Child method")

child_obj = Child()
child_obj.method()

# ... Method Overriding
# Method overriding in Python is like giving a new
# version of a song a twist to make it unique. Imagine you have a popular
# song, and a singer wants to sing it in their own style. They keep the main
# melody but add their own special touches. In Python, method overriding is
# similar. When you have a class with a method, you can create a new class
# based on it. In the new class, you can write the same method, but with
# some changes to make it work differently. This way, you keep the basic
# idea from the original method, but you customize it to suit the new
# class's needs.
class Parent:
    def method(self):
        print("Parent method")

class Child(Parent):
    def method(self):
        print("Child method")

parent_obj = Parent()
child_obj = Child()

parent_obj.method()
child_obj.method()

# ... Polymorphism
# Polymorphism in Python is like using a single tool in
# many different ways. Think of a simple tool, like a pen. You can use it to
# write, draw, or even tap something. Even though you're doing different
# things, you're using the same tool in various ways. In Python,
# polymorphism lets you use the same method name but with different
# implementations in different classes. It's like having a method that can
# do different things based on the class you're using it in. This makes your
# code more flexible and versatile, just like using that one pen for
# multiple tasks.
class Cat:
    def speak(self):
        print("Meow!")

class Dog:
    def speak(self):
        print("Woof!")

def pet_speak(pet):
    pet.speak()

cat = Cat()
dog = Dog()

pet_speak(cat)
pet_speak(dog)

# ... Abstract class Abstract classes in Python are like blueprints that you
# can't build directly. Imagine you have a plan for building different types
# of houses. The blueprint has general ideas, like the number of rooms and
# their sizes, but it doesn't tell you how to build a specific house.
# Abstract classes work similarly. They provide a basic structure with some
# methods, but you can't create objects directly from them. Instead,
# you make new classes that follow the blueprint and provide their own
# details for the methods. Abstract classes ensure that certain methods are
# present in the new classes, but each new class can have its own way of
# implementing them.
from abc import ABC, abstractmethod

class Shape(ABC):
    @abstractmethod
    def area(self):
        pass

class Circle(Shape):
    def area(self):
        return 3.14 * self.radius * self.radius

class Rectangle(Shape):
    def area(self):
        return self.width * self.height

circle = Circle()
rectangle = Rectangle()

# ... Magic methods and operator overloading Magic methods in Python are
# like secret spells that make your objects do special things when you use
# certain actions. Think of them as hidden instructions that Python
# understands when you do something with an object. For example, when you
# use the + operator between two numbers, Python knows to add them together.
# Magic methods are like those behind-the-scenes instructions. They have
# double underscores (__) around their names and help objects respond to
# things like arithmetic, comparisons, and even printing. Using magic
# methods lets you make your objects behave in a way that feels natural and
# expected.
#
# Operator overloading in Python is like giving new meaning to familiar
# symbols. Imagine if you could use the + sign not only for adding numbers
# but also for combining words or even joining sentences. Operator
# overloading lets you do something similar with operators like +, -, *,
# and more. In Python, you can make your objects understand and respond to
# these operators in a special way. For example, you can make a custom class
# add two objects together using the + operator. It's like teaching your
# objects new tricks and making your code more expressive and creative.
class Vector:
    def __init__(self, x, y):
        self.x = x
        self.y = y

    def __add__(self, other):
        return Vector(self.x + other.x, self.y + other.y)

v1 = Vector(1, 2)
v2 = Vector(3, 4)
result = v1 + v2

# ... Composition
# Composition in Python is like building complex things by
# putting together simpler pieces. Imagine creating a robot using various
# components like arms, legs, and a head. Each part has its own role,
# but when you put them together, you get a complete robot. In Python,
# composition means creating a new class by combining existing classes.
# Instead of inheriting everything from one class, you use objects of other
# classes as parts of your new class. This helps you build more flexible and
# modular code. It's like building something bigger by assembling smaller
# pieces that each have their own unique purpose.
class Engine:
    def start(self):
        print("Engine started")

class Car:
    def __init__(self):
        self.engine = Engine()

    def start(self):
        self.engine.start()

car = Car()
car.start()

# ... Exception Handling
# Exception handling in Python is like having a
# backup plan for when things go wrong. Imagine you're baking cookies,
# and you realize you're out of sugar. Instead of giving up, you might use a
# sugar substitute or find another way to sweeten your cookies. In Python,
# exception handling is a way to deal with unexpected problems that might
# occur while your program is running. Instead of crashing, your program can
# catch these problems and handle them gracefully. You use try and except to
# surround code that might cause issues. If something goes wrong, Python
# doesn't stop – it jumps to the except part to handle the problem and keep
# your program running smoothly.

# You can use one try-block, as many except-blocks as you like but at least
# one, then else-block and finally-block are optional. Here is an example
# using all block options available:
try:
    num = int(input("Enter a number: "))
    result = 10 / num
except ValueError:
    print("Invalid input. Please enter a valid number.")
except ZeroDivisionError:
    print("Cannot divide by zero.")
else:
    print(f"The result is: {result:.2f}")
finally:
    print("Thank you for using the program!")
#
# In this example: The try block attempts to take a number from the user,
# then calculates the result of dividing 10 by that number. If the user
# enters a non-numeric value, the ValueError exception is caught in the
# first except block. If the user enters zero (causing division by zero),
# the ZeroDivisionError exception is caught in the second except block. If
# there are no exceptions, the else block prints the result with two decimal
# places. The finally block always runs, regardless of whether an exception
# occurred or not. It prints a closing message. This way, the program
# handles different exceptions and ensures that it provides feedback to the
# user, even if something unexpected happens.


# File Handling
try:
    with open("filename.txt", "r") as file:
        data = file.read()
except FileNotFoundError:
    print("File not found")
except PermissionError:
    print("Permission denied")
except Exception as e:
    print(f"An error occurred: {str(e)}")


# ... Modules
# Modules in Python are like toolkits filled with useful
# functions and tools that you can use in your programs. Imagine you have a
# toolbox with different tools for different tasks, like a hammer for nails
# and a screwdriver for screws. In Python, modules are collections of code
# that others have created to make your coding easier. Each module has
# functions, classes, or variables that help you do specific things.
# Importing modules is like opening your toolbox and taking out the tools
# you need. You can use them to solve problems in your program without
# starting from scratch. It's like borrowing tools from others to get your
# work done faster and more efficiently. Importing from modules
from module_name import ClassName

# Using the imported class
obj = ClassName()
obj.method()


