import numpy

def volumeCuboid():
  l = int(input("L:"))
  w = int(input("W:"))
  h = int(input("H:"))
  total = l*w*h
  return total

def areaCircle():
  r = int(input("r:"))
  Area = numpy.pi*(r**2)
  return Area


#print(volumeCuboid())
print(areaCircle())
