#Author: Percival Roberts
#Date: October 16, 2022
#Description: Continuous Assessment 5-Question #3

count = 1
total = float(0.0)

while(count <= 10):
    print("\n*****",count,"*****\n")
    print("Enter student GPA :")
    gpa = float(input())
    
    total= total + gpa
    count = count +1
    
    average = total/10
print("The class average is", average)
