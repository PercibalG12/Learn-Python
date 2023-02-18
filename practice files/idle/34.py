#Author: Percival Roberts
#Date: October 16, 2022
#Description: Continuous Assessment 5-Question #5

factor = 0
number = int(input("Enter a numberber: "))
print("The factors of", number, "are:")

while(factor <= number):
    factor +=1
    if(number%factor==0):
        print(factor)
