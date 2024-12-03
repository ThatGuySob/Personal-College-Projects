#Question B 
#Student Name: Bartosz
def class_average(student_percentage):
  class_average = sum(student_percentage)/len(student_percentage)
  return

  

student_names = []
student_scores = []
student_percentage = []
student_number = 0
total = 0
class_average = 0
keepGoing = True

while keepGoing:
    name = input("Please enter the student's name: ")
    if name.lower() != "end":
        student_names.append(name)
        score = int(input("Please enter the student's mark: "))
        student_scores.append(score)
        percentage = (score/200)*100
        student_percentage.append(percentage)

    else:
        keepGoing = False
average = class_average(student_percentage)

print("The students' names are: ", student_names)
print("The students' results are: ", student_scores)
print("The students' percentages are: ", student_percentage)
print("The average result in the class was: ", average, "%")