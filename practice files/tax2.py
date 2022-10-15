customer = input('Enter Customer Name :')
pamount = float(input('Enter Purchase Amount :'))
tax = float(input('Enter Tax code 0 or 1 :'))
# Function to determine tax and total amount
if tax == 0:
    statetax = pamount * 0
    tamount = pamount + statetax
    print('Customer:', customer)
    print('Taxed amount is =', statetax)
    print('Total amount is =', tamount)

else:
    statetax = pamount * 0.03
    tamount = pamount + statetax
    print('Customer:', customer)
    print('Taxed amount is =', statetax)
    print('Total amount is =', tamount)