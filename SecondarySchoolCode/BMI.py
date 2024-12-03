# Question 16(a)
# Examination Number: 110916

def display_intro():
  print("Welcome to my BMI calculator!")

display_intro()
weight = int(input("Enter weight (in kilograms): ")) # read weight
height = int(input("Enter height (in centimetres): ")) # centimetres

bmi = weight / pow(height, 2) * 10000

print("BMI is: ", round(bmi, 1))

if bmi >= 30:
  print("Obese")
elif bmi >= 24.9:
  print("Overweight")
elif bmi >= 18.5:
  print("Normal")
else:
  print("Underweight")