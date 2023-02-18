# Design a program that will convert imperial measurements to metric

# The program should give the user the following options:

# 1. inch to cm

# 2. yard to meter

# 3.Quart to liter

# 4.Mile to Kilometer

# 5. Pound to Kilogram

# The program should end when the user enter -90909


print("Please select a conversion from the below listed menu")
print("=====================================================")
print("Please selecet num 1. for inch to cm conversion")
print("Please selecet num 2. for yard to meter conversion")
print("Please selecet num 3. for quart to liter conversion")
print("Please selecet num 4. for mile to to kilometer conversion")
print("Please selecet num 5. for pound to kilogram conversion")

conversion= int(input("Please select a conversion:"))

if conversion == 1:
    inch= float(input("Please enter a value in inches to be converted to centimeter:"))
    cm = inch * 2.14
    print(cm)
elif conversion == 2:
    yard= float(input("Please enter a value in yard to be converted to meter:"))
    meter = yard * 0.9144
    print(meter)
elif conversion == 3:
    quart= float(input("Please enter a value in quart to be converted to liter:"))
    liter = quart * 1.136523
    print(liter)
elif conversion == 4:
    mile= float(input("Please enter a value in mile to be converted to kilometer:"))
    kilometer= mile * 1.609344
    print(kilometer)
elif conversion == 5:
    pound= float(input("Please enter a value in pound to be converted to kilogram:"))
    kilogram = pound * 0.45359237
    print(kilogram)
elif conversion> 5:
    print("Invalid conversion \n please select a value between 1 and 5 ")

