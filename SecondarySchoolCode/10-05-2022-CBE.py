Word = input(str("Enter a word:"))
Upper = 0
Lower = 0
Number = 0

for i in Word:
  print(i)
  if i.isupper():
    Upper += 1
    print(Upper)
  elif i.islower():
    Lower += 1
  elif i.alnum():
    Number += 1
print(UpperWords)