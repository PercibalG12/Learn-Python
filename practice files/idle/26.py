#Author: Percival Roberts
#Date: October 2, 2022
#Description: Continuous Assessment 3- Question #4a

salary = float(input("Please enter your salary: $"))
net_income =  float()
income_tax =  float()

if salary <= 796536:
    income_tax = 0.00
    net_income = salary-(salary*income_tax)
    print("Your income tax is ",(round(income_tax *100)),"%")
    print("Your netincome is ",net_income)

elif salary > 796536 and salary <= 6000000:
     income_tax = 0.25
     net_income = salary-(salary*income_tax)
     print("Your income tax is ",(round(income_tax *100)),"%")
     print("Your netincome is ",net_income)

elif salary > 6000000:
     income_tax = 0.30
     net_income = salary-(salary*income_tax)
     print("Your income tax is ",(round(income_tax *100)),"%" )
     print("Your netincome is ",net_income)
