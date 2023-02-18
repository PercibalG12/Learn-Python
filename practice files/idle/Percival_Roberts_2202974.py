data = [
    [ 5,  10, 8768423808, 3], # age, id, contact, grade
    [ 5, 20, 8768213807, 3],
    [ 5, 30, 8768423806, 3],
    [ 3, 40, 8766783805, 1],
    [ 3, 50, 8768623804, 1],
    [ 3, 60, 8768823803, 1],
    [ 4, 70, 8768723802, 2],
    [ 4, 80, 8768623801, 3],
    [ 4, 90, 8761423908, 2],
    [ 5, 100, 8768723708, 2],    
]

# Prints options and prompts for user input
print("(1) Add student to the list\n(2) Search for student and print details\n(3) Edit a student information\n(4)Exit")
option = int(input("Please enter an option: "))

# adds  student(s) to the list 
if option ==1:
    add= int(input("Please enter the amount of students you would like to add to the list:")) 
    for i in range(add):
        mod_list= []
        age= int(input("Please enter the student's age:"))
        id= int(input("Please enter the student's id number"))
        contact= int(input("Please enter the student's parent contact  number: "))
        grade= int(input("Please enter the student's grade: "))
        mod_list.append(age)
        mod_list.append(id)
        mod_list.append(contact)
        mod_list.append(grade)
        data.append(mod_list)
    print(data)

#search for students id and prints their information 
elif option ==2:
    search= int(input("Please enter the student's ID number:"))
    for id in data:
        if search == id[1]:
	        print("This student's age is ",id[0], "their ID number is ",id[1],
            "and their parent contact is",id[2],"the student is also a member of class",id[3] )
           

# edit a student's information
elif option==3:
    index=0
    search= int(input("Please enter the student's ID number fo which information you want to be edited :"))
    for id in data:
        if search == id[1]:
            mod_list= []
            age= int(input("Please enter the student' new age:"))
            id= int(input("Please enter the student's  new ID number"))
            contact= int(input("Please enter the student's new parent contact  number "))
            grade= int(input("Please enter the student's new grade: "))
            mod_list.append(age)
            mod_list.append(id)
            mod_list.append(contact)
            mod_list.append(grade)
            data[index] = mod_list
        index+=1
    print("The information has been updated")
    print(data)
# exit the program
else:
    print("You have exited the program, have a nice day")

        

