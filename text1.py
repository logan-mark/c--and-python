class Student:
    def __init__(self,
                 name,
                 age,
                 gender):
        self.name=name
        self.age=age
        self.gender=gender
        return
    
import pickle

stu=Student("Zhang san",20,True)
str_stu=pickle.dumps(stu)
print(str_stu)