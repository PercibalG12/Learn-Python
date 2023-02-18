#Author: Percival Roberts 
#Date: September 25, 2022
#Description: Continuous Assessment 2: Question #7

num = input("Please enter a 4 digit number: ")

while len(num) != 4 or not num.isdigit(): #checks if the length of the string is 4
    print("Invalid digit entered.")
    num = input("Please enter a 4 digit number: ")


def encrypt(result):
    answer = []
    for i in result:
        i = int(i)
        if i >= 5:
            i = 9 - i
        answer.append(str(i))
    return answer


print(''.join(encrypt(num)))



