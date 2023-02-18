#Author: Percival Roberts 
#Date: October 2, 2022
#Description: Continuous Assessment 3- Question #2

option = int(input("(1).Convert Miles to Yards\n(2).Covert Miles to Feet\n(3).Convert Miles to inches\noption: "))
miles = float(input("\nPlease enter distance in miles for conversiion: "))
feet = float

if(option == 1):
    yards = miles*1760
    print("The answer is", yards,"yards")

elif(option == 2):
    feet = (miles * 5280)
    print("The answer is", feet,"feet")

elif(option == 3):
    inches = miles*63360
    print("The answer is",inches,"inches")

else:
    print("INVALID OPTION")