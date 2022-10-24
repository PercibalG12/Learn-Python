Building_type = input(" Please enter Residential or Commercial:")
loan = float(input("PLease enter a loan amont:"))
deposit = 0.0


if Building_type == "Residential" or Building_type =="residential":
    if loan >= 0 and loan <= 5000000:
        deposit = 0.025 * loan
        
    elif loan  >= 5000001 and loan <= 10000000:
         deposit = 15000 +( loan - 5000000 ) * 0.0312

    elif loan >10000000:
         deposit = 45000 +(loan - 10000000 ) * 0.0278

elif Building_type== "Commercial" or Building_type =="commercial":
     if loan >= 0 and loan <= 5000000:
        deposit = 0.0265 * loan
        
     elif loan  >= 5000001 and loan <= 10000000:
         deposit = (0.022 * loan) + ( loan - 5000000)  * 0.0312

     elif loan >10000000:
         deposit = (0.0275 * loan) + ( loan - 10000000 )  * 0.03

else:
    print("Invalid selection you can only select Residential or Commercial")

print("You choose the building type:", Building_type)
print("You should pay the following deposit for your mortgage:", (round(deposit,2)))
