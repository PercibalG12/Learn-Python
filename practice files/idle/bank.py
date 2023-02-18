starting_balance = 30000

while True:

   print(" Options")
   print("Please enter the number 1 to check your account")
   print("Please enter the number 2 to deposit into your account")
   print("Please enter the number 3 withdraw money from your account")

   enter_option =int(input("Please enter an option from above: "))

   if enter_option  == 1:
      print(starting_balance)

   elif enter_option  == 2:
         amount_entered= float(input("Please enter an amount you would like to deposit: "))
         if amount_entered > 100000:
            print("Cannot deposit that much")
         elif amount_entered<= 100000:
            new_balance = starting_balance + amount_entered
            print(new_balance)
         elif amount_entered<= 0:
            print("error") # not working for some reason stupid nigga


   elif enter_option  == 3:
      withdraw_amount=float(input("Enter an amount you would like to withdraw: "))
      if withdraw_amount>= 17000:
         print ("Invalid")
      elif withdraw_amount< 17000:
         withdraw_balance = starting_balance - withdraw_amount
         print(withdraw_balance)

         while enter_option>=4:
            print("invalid")
            continue 

        
   


