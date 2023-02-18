#Author: Percival Roberts 
#Date: October 23, 2022
#Description: Continuous Assessment 6-Question #1

result = float()

while True:
    print("CALCULATOR\n ")
    print(" Select an operation to perform: ")
    code= int(input(" \n 1 Addition  \t \t 2 Subtraction \n 3 Multiplication \t 4 Division \n 5 Exit \n"))
    
    if code == 1:
            num1 = float(input("\nEnter  the first number: "))
            num2= float(input("Enter the second  number: "))
            result = num1 + num2
            print("When", num1, "is added to", num2,"the result is: ", result )
        
    elif code == 2:
            num1 = float(input("\nEnter  the first number: "))
            num2= float(input("Enter the second  number: "))
            result = num1 - num2
            print("When", num1, "is subtracted from ", num2,"the result is: ", result )
        
    elif code == 3:
            num1 = float(input("\nEnter  the first number: "))
            num2= float(input("Enter the second  number: "))
            result = num1*num2
            print("When", num1, "is multiplied by", num2,"the result is: ", result )

    elif code == 4:
            num1 = float(input("\nEnter  the first number: "))
            num2= float(input("Enter the second  number: "))
            if num2 == 0:
                print(" \n Please enter a value greater than zero:  ")
                num1 = float(input("\nEnter  the first number: "))
                num2= float(input("Enter the second  number: "))
                result = num1/num2
                print("When", num1, "is divided by ", num2,"the result is: ", result )
            else:
                result = num1/num2
                print("When", num1, "is divided by ", num2,"the result is: ", result )
            
   
    elif code ==5:
        print("You have successfully exited the calculator")
        break


