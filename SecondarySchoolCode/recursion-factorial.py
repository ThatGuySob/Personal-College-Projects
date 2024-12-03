def factorial(num):
  if num != 1:  
    answer = num * factorial(num - 1)
    print(num, answer)
  else: 
    answer = 1
    print(answer)

x = factorial(6)
print("6!= ", x)