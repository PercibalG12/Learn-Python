id=[21,22,23,24,25,26,27,28,29,30]
print("Welcome to ABC Kindergarten\n\n")
option = int(input("Press 1 to Add Student\nPress 2 to search a Student by ID and print all information\nPress 3 to Edit Student\nPress 4 to Exit\n\n"))
while option != 4:
    if option ==1:
        age =int(input("Please enter age: "))
        id =int(input("Please enter ID number: "))
        contact =int(input("Please enter contact information: "))
        grade =int(input("Please enter class/grade: "))
        print(age)
#search
    elif option ==2:
         temp = int(input("Please enter a number: "))
         for i in range(temp):
            if temp ==id[i]:
                print("party")
    
    elif option ==3:
        print("ty")
    
    elif option ==4:
         print("You have exited the program")
	
    




		
			