# Question 16(c)
# Examination Number: 110916

def find_nth_largest(n, list_of_values):
  

    bmi_values = [24, 19, 33, 35, 27, 18, 15, 33, 35, 23, 32, 23]

count_obese = 0
largest = 0
second_largest = 0

for item in bmi_values:
  if item >= 30:
    count_obese = count_obese + 1
  if item > largest:
    second_largest = largest
    largest = item

print("Obese: ", count_obese)
print("Largest: ", largest)
print("Second Largest: ", second_largest)