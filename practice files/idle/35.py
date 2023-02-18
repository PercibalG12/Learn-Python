print("*****The three packages offered are shown below:*****\n")
print("1. Scenic Tour (base cost - US$119)\n2. Relaxation Tour (base cost - US$139)\n3. Joyous Fun Tour (base cost - US$149)\n")

tot_sum=0	
total=0
total_sum=0
count=1	
while(count<=15):
    
    customer_id=int(input("\nPlease enter your customer's ID number: "))
    customer_name=str(input("Please enter your  name: "))              
    package_type=int(input("Please Enter the Type of Package You Would like to Purchase: "))
    if(package_type > 3):
        print("\nINVALID PACKAGE TYPE\n")
    
    if(package_type==1):
        price=119
        print("US$",price)
        tot_sum=tot_sum + price
                
    elif(package_type==2):
        price=139
        print("US$",price)
        total_sum=total_sum+price	

    elif (package_type==3):
        price=149
        print("US$",price) 
        total=total+price
    
       
                        
    count=count+1
price=tot_sum + total_sum + total
average=price/15
print("\nThe total cost for all trips is: US$",price)
print("\nThe average cost per customer is: US$",average)
