# Question 16(a)
# Examination Number: 110916

# This calculator can only add and substract

repeat = True

name = input(str("Please enter your name: "))

print("Hello", name.capitalize() + ".")
# num1 = 9
# num2 = 5

num1 = int(input("Enter the first number:"))
num2 = int(input("Enter the second number:"))





while repeat == True:
  print('Do you want me to (a)dd or (s)ubtract?')
  choice = input()
  if choice.capitalize() == 'A':
    print (num1, "+", num2, "=", num1 + num2)
    repeat = False
  elif choice.capitalize() == 'S':
    print (num1, "-", num2, "=", num1 - num2)
    repeat = False
  else:
    print("Invalid option")
    repeat == True
    
    