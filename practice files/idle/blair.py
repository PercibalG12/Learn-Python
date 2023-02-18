flag = 0
count= 0

gct = float
ticketCost = float
totalCost = float
totalCharge = float

print("Welcome to TravelJA Limited: ")
print("---------------------------------------")
numPerson=int(input("Enter number of persons travelling: "))

while (count < numPerson):
    print("Select flight class code")
    print("(E)conomy")
    print("(B)usiness")
    print("(F)irst")
    classCode=input("Enter code: ")
    flag = 0
    
    while flag != 1:
        if classCode == 'E' or 'e':
            ticketCost = 250
            gct = ticketCost * 0.15
            totalCost = ticketCost + gct
            flag = 1
            print(totalCost)
        elif classCode == 'B' or  'b':
            ticketCost = 350
            gct = ticketCost * 0.15
            totalCost = ticketCost + gct
            flag = 1
            print(totalCost)
        elif classCode == 'F' or 'f':
            ticketCost = 450
            gct = ticketCost * 0.15
            totalCost = ticketCost + gct
            flag = 1
            print(totalCost)
        else:
            print("INVAILD CODE!")
            print("Select flight class code")
            print("(E)conomy")
            print("(B)usiness")
            print("(F)irst")
            classCode=str(input("Enter code: "))
            totalCharge = totalCharge + totalCost
            totalTax = totalTax + gct
            count = count + 1
            print("\n------------------------------------------")
            print("\nTicket #:", count)
            print("\nFlight Class:", classCode)
            print("\nTax Cost: $.2f", ticketCost)
            print("\nTax Amount: $.2f", gct)
            print("\nTotal Cost: $.2f", totalCost)
            print("\n--------------------------------------------")
            print("\nTotal persons process:", numPerson)
            print("\nTotal Tax Amount: $.2f", totalTax)
            print("\nTotal Charges: $.2f",totalCost)
    break
