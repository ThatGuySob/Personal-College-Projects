def volumeCube(length, width, height):
  volume = length*width*height
  print(volume, "m cubed")
  return volume

vol = volumeCube(20, 30, 3)
cost = 20*vol
print(cost)