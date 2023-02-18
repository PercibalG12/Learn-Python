
# Name: Percival Roberts

# Description: Find the average age of a class of 20

age=0

count=0


while count<20:
  student_age=int(input("Please enter student age :"))
  age=student_age+age
  count+=1

average=age/20

print("The average age of the class is :",average)