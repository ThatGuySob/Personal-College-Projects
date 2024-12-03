
#Question A 
#Student Name: Bartosz

student_name = input("Please enter the student's name: ")
student_score = float(input("Please enter the student's mark: "))
exam_total = int(input("Please enter the total amount of marks going for the exam: "))
score_as_a_percentage = (student_score/exam_total)*100
score_as_a_percentage = round(score_as_a_percentage, 1)

print(student_name, " scored ", score_as_a_percentage,"%")