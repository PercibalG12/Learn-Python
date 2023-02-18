
tax = 0
total_cost = 0 


while True:
    tax_code =int(input("Please enter a tax code ranging from 1 to 4: "))

    if tax_code == 1:
        customer_name = input("Please enter your name: ")
        purchase_amount = float(input("Please enter a purchase amont: "))
        sales_tax = purchase_amount *  0
        total_cost = sales_tax + purchase_amount
        print("Your sales tax is ",sales_tax)
        print("Your total cost  is ",total_cost)

    elif tax_code ==2:
        customer_name = input("Please enter your name: ")
        purchase_amount = float(input("Please enter a purchase amont: "))
        sales_tax = purchase_amount * 0.03
        total_cost = sales_tax + purchase_amount
        print("Your sales tax is ",round(sales_tax, 2))
        print("Your total cost  is ",total_cost)


    elif tax_code ==3:
        customer_name = input("Please enter your name: ")
        purchase_amount = float(input("Please enter a purchase amont: "))
        sales_tax = purchase_amount * 0.05
        total_cost = sales_tax + purchase_amount
        print("Your sales tax is ",round(sales_tax, 2))
        print("Your total cost  is ",total_cost)

    elif tax_code ==4:
        customer_name = input("Please enter your name: ")
        purchase_amount = float(input("Please enter a purchase amont: "))
        sales_tax = purchase_amount * 0.07
        total_cost = sales_tax + purchase_amount
        print("Your sales tax is ",round(sales_tax, 2))
        print("Your total cost  is ",total_cost)

    else:
        print("Incorrect Choice")

    repeat = input("Do you want to continue? (y/n)")


    if repeat == 'n' or repeat == 'N':

        break


