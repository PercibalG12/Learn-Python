#Name: Percival Roberts
#Date: November 20,2022
#Description: continuous Assessment 9 Question #4

id_number_array= []
tuition_array = []
Status = []
total_students = 0
i = 0
total_tuition = 0
total_boarding_students =0
total_travelling_students = 0

while(i==0):

    code=0

    id_num = int(input("\nEnter ID number, and 0 to exit.\n"))

    if(id_num!=0):

        if id_num>0:

            for j in range(0, len(id_number_array)):

                if(id_num==id_number_array[j]):

                    code=1

            if code==0:
                id_number_array.append(id_num)
                tuition = int(input("\nEnter tuition amount.\n"))

                if tuition>0:

                    tuition_array.append(tuition)

                    total_tuition = total_tuition + tuition

                    status = input("\nEnter B for boarding or T for travelling.\n")

                    if status=='B' or status=='T' or status=='b' or status=='t':

                        Status.append(status)

                        if status=='B' or status=='b':

                            total_boarding_students = total_boarding_students + 1

                        else:

                            total_travelling_students = total_travelling_students + 1

                    else:

                        print("\nInvalid Entry, please try again.\n")

                        id_number_array.pop()

                        tuition_array.pop()

                        total_tuition = total_tuition - tuition

                        

                else:

                    print("\ntuition amount cannot be negative or zero, please try again.\n")

                    id_number_array.pop()

                    

                total_students = total_students + 1

                if(total_students==50):

                    print("\nLists are full.\n")

                    i = 1

            else:

                print("\nID number already exists, please restart.\n")

                id_number_array.pop()

                

        else:

            print("\nID number cannot be negative. Please restart\n")

            id_number_array.pop()

            
    else:

        i=1

        print("\nYou entered 0. Input is stopped.\n")


 

print("\nTotal Students are: ",total_students)

print("\nTotal Boarding Students are: ", total_boarding_students)

print("\nTotal Travelling Students are: ", total_travelling_students)

print ("\nTotal  amount of tuition collected is: ", total_tuition)