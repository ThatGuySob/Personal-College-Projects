# Question 16(b)
# Examination Number: 110916

# For this question it is useful to understand ... 
# 1. randint(a, b) returns a random integer N such that a<=N<=b.
# 2. s.append(x) appends the element x to the end of list s.

from random import *

heights = [] # an empty list of heights 
weights = [] # an empty list of weights 
bmi_values = []
#Loop to build up the lists with random values

ran = int(input("Enter the number of pairs of values you wish to generate: "))

for count in range(ran):
  # a random integer between 150 and 210
  heights.append(randint(150, 210))
  # a random integer between 50 and 130
  weights.append(randint(50, 130))

for i in range(ran):
  val = weights[i] / pow(heights[i], 2) * 10000
  bmi_values.append(round(val, 1))

# Display the lists
for x in range(1):
  print ("Heights: ", str(heights))
  print ("Weights: ", str(weights))
  print ("BMI Values: ", str(bmi_values))

