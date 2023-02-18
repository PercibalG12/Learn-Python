#Name: Percival Roberts
#Date:November 6,2022
#Description: Continuous Assessment 8: Question 2
 
balance=0
count=1
Tennis=0
Swimming=0
Badminton=0

while True:
    name=input("Please enter the clients name: ")
    if(name=='XXX' or name=='xxx'):
        break
    print("\nSporting Events:\n1) T-Tennis (18,000)\n2) B-Badminton (14,000)\n3) S-Swimming (16,000)\n")
    while True:
        Val=0
        Code=str(input("\nWhat is the client'Swimming event choice: 'T', 'B' OR 'S'? "))
        match Code:
            case 'T' | 't':
                Tennis=Tennis+1
                amount_paid=float(input("Enter the amount paid for sporting event: "))
                balance = 18000 - amount_paid

                print("\nThe 'Tennis Package' was selected")
                print("\nClient'Swimming Name: ",name)
                print("\nThe remaining balance is: ",balance)
                print("\n\n")

            case 'B' | 'b':
                Badminton=Badminton+1
                amount_paid=float(input("Enter the amount paid for sporting event: "))
                balance = 14000-amount_paid

                print("\nThe 'Badminton Package' was selected")
                print("\nClient'Swimming Name: ",name)
                print("\nThe remaining balance is: ",balance)
                print("\n\n")
                
            case 'S' | 's':
                Swimming=Swimming+1
                amount_paid=float(input("5Enter the amount paid for sporting event: "))
                balance = 16000-amount_paid

                print("\nThe 'Swimming Package' was selected")
                print("\nClient'Swimming Name: ",name)
                print("\nThe remaining balance is: ",balance)
                print("\n\n")
            case _:
                print("INVALID CODE")
                Val=1
        if (Val==0):
            break
    
    
    
print("\nThe total number of 'Tennis' packages are: ",Tennis)
print("\nThe total number of 'Badminton' packages are: ",Badminton)
print("\nThe total number of 'Swimming' packages are: ",Swimming)
