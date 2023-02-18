#Author: Percival Roberts
#Date: October 9, 2022
#Description: Continuous Assessment 4- Question #1

vehicle_height = float(input("Please enter the height of the vehicle (meters): "))
vehicle_length = float(input("Please enter the length of the vehicle (meters): "))

if vehicle_height < 1.7:
    print("Class 1 vehicle")
else:
    if vehicle_height >= 1.7:
        if vehicle_length < 5.5:
            print("Class 2 vehicle")
        else:
            print("Class 3 vehicle")
