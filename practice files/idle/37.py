#Author: Percival Roberts
#Date: October 23, 2022
#Description: Continuous Assessment 6-Question #1


while True:
    print("\nWelcome to the calculator menu\nPlease select a code(1,2,3,4)")
    code= int(input("1 for Addition\n2 for Subtraction\n3 for Multiplication\n4 for Division\nEnter a code: "))
    num1 = float(input("\nEnter your first number : "))
    num2= float(input("Enter your second number: "))
    
    if(code == 1):
            result = num1 + num2
            print("The result of:",num1,"+",num2,"is", result)
        
    elif(code == 2):
            result = num1 - num2
            print("The result of:",num1,"+",num2,"is", result)
        
    elif (code == 3):
            result = num1*num2
            print("The result of:",num1,"+",num2,"is", result)

    elif (code == 4):
            result = num1/num2
            print("The result of:",num1,"+",num2,"is", result)

    elif (code !=1 or code !=2 or code !=3 or code !=4 ):
        print("Invalid code ")
        break  
    
          

# secret_word = "python"
# counter = 0

# while True:
#     word = input("Enter the secret word: ").lower()
#     counter = counter + 1
#     if word == secret_word:
#         break
#     if word != secret_word and counter > 7: 
#         break