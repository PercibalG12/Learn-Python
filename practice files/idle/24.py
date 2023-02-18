vacType = input ("Vacation Types avaliable:\n 'C' for Cruise\n 'H' for Hotel\n 'F' for Flight\n Please enter a vacation type: ")
    
if vacType=='C' or vacType=='c':
    print("Cruise")
else:
    if vacType=='H' or vacType=='h':
        print("Hotel")
    else:
        if vacType=='F' or vacType=='f':
            print("Flight")
        else:
            print("Invalid")
