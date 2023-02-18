#Name: Percival Roberts 
#Date: November 6, 2022
#Description: Continuous Assessment 7: Question #1

count =1

num= int(input("Please enter a number ranging from 1 - 12: "))

if num > 12:
	print("\nInvalid Input only enter values from 1-12 \n")


elif num<=12:
	print("THE",num, "TIMES TIMETABLE IS AS FOLLOWS:")
	for count in range(num):
		ans = count * num
		count= count+1
		print(num,"*", count, "=", ans)
		
while num >= 12:
	break

