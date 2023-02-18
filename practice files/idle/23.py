




# Version 2
option=0
while option !=3:
    print("*******Plese select an option*******")
    print("1.Find the sum\n")
    print("2.odd numbers between two points\n")
    print("choose option, Enter 3 to exit\n ")
    option=int(input("Please select an option:"))

    if option == 1:
         a=int(input("Plese enter the first number of the  range :"))
         b=int(input("Plese enter the second number of the  range :"))
         sum=0
         for  i in  range (a,b+1):
            sum+=i
         print(sum)

    elif option == 2:
         a=int(input("Plese enter the first number of the  range :"))
         b=int(input("Plese enter the second number of the  range :"))
         for  i in range (a ,b+1):
            if i % 2 ==1:
                print(f"{i} is an odd number")

    while option ==3:
        print("You have succesfully exited the program")
        break    
