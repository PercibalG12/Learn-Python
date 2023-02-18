#Author: Percival Roberts 
#Date: November 6, 2022
#Description: Continuous Assessment 8-Question #6

count = 0
price = int()
cost = 0
total = 0
x = 0

record = int(input("Enter number of record to be processed:"))

for x in range(0, record):
    id = int(input("\nEnter customer ID number:"))
    name = input("Enter customer's name:")
    
    
    print("\n\n******PACKAGES**********")
    print("\n1. Scenic Tour- US$119")
    print("\n2. Relaxation Tour-US$139")
    print("\n3. Joyous Fun Tour-US$149")
    print("\n**************************")
    package= int(input("\nEnter number: "))
    hours = int(input("Enter hour spent on trip(1-3): "))
    
    if(package == 1):
        price = 119
        if(hours == 1):
            cost = price + (hours * 20)
        elif(hours == 2):
            cost = price + (hours * 20)
        elif(hours == 3):
            cost = price + (hours * 20)
    elif(package == 2):
        price = 139
        if(hours == 1):
            cost = price + (hours * 20)
        elif(hours == 2):
            cost = price + (hours * 20)
        elif(hours == 3):
            cost = price + (hours * 20)
    elif(package == 3):
        price = 149
        if(hours == 1):
            cost= price + (hours * 20)
        elif(hours == 2):
            cost = price + (hours * 20)
        elif(hours == 3):
            cost = price + (hours * 20)
    else:
        print("Invalid!")
        
    count = count + 1
    total = total + cost
    
   
    print("Customer's ID number:", id)
    print("Customer's name:", name)
    print("Trip cost: $", cost)

print("Total cost for all trips:$", total)
