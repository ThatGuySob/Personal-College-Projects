Question 1 

def pi():
  print(22/7)

pi()

Question 2 

def div():
  first = int(input("What is the first number: "))
  second = int(input("what is the second number: "))
  print(first/second)

div()

Question 6

#my attempt
def rrp():
  rrp1 = float(input("Whats the original price of your item: "))
  percent = float(input("What is the percentage discount on the item: "))
  percent = percent/100
  discount = rrp1*percent
  finprice = rrp1 - discount
  print(finprice)
  return finprice


for i in range(6):
  rrp()
  
#teachers attempt in onenote