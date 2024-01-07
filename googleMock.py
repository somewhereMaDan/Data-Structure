# Design a class
#   1. Inserting a value (no duplicates)
#   2. Removing a value
#   3. Get a Random Value that is already inserted 
#                           (with equal probablity) 

import random

class store:
  def __init__(self):
    self.values = []
    self.map = {}
    
  def insert(self, value):
    if value in self.map:
      return
    
    self.values.append(value)
    self.map[value] = len(self.values) - 1
    
  def remove(self, value):  
    if value not in self.map:
      return
    
    index = self.map[value]
    
    # Swapping
    last_val = self.values[-1]
    self.values[-1] = value
    self.values[index] = last_val
    self.map[last_val] = index
    
    self.values.pop()
    del self.map[value]
    
  def get_random(self):
    return random.choice(self.values)

obj = store()
obj.insert(3)
obj.insert(4)
obj.insert(4)
obj.insert(5)

obj.remove(3)

print(obj.get_random())

  # [3,4,4,5]
  
  # self.values = [3,4,5]
  # self.map = {3:0,4:1,5:2}
  
  # index = self.map[3] -> 0
  # last_val = self.values[-1] -> 5
  # self.values[-1] = value -> [3,4,3]
  # self.values[0] = 5 -> [5,4,3]
  # self.map[5] = 0 -> {3:0,4:1,5:0}
  
  # [5,4]  {4:1,5:0} 
      