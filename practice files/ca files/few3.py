#Name: Percival Roberts 2202974
#Date: December 14, 2022
#Description: Programming 1 FINAL EXAM Part 3 of 3  Section 1 
 
#DECLARE VARIABLES 
REGFEE = 4500
totalOfficeVisits =0 
totalPhysicalVisits=0
totalScreeningVisits=0
totalVisits=0 
cost= 0
totalCost=0
totalCharges = 0
age= int()
validWKEndM= str()
validWKEvn= str()
validWKEndE= str() 
validWKEndM= str()
# WHILE LOOP TO ENSURE THE PROGRAM RUNS ATLEAST ONCE, A WHILE LOOP IS USED BECUSE PYTHON DOES NOT HAVE A DO WHILE LOOP SO AT THE END WE USE AN IF STATMENT TO EXIT THE LOOP 
while True:
    patientName = input("Please Enter Patient's name [TO Exit- Enter NO]: ")
    age = int(input("Please Enter Patient's Age: "))
    #VALIDATE AGE BETWEEN 12 AND 100 INCLUSIVE
    while age < 12 or  age >100:
        age = input("Please Enter Patient's Age: ")

    gender =input("Enter gender[M/F]: ")
    #VALIDATE GENDER MALE OR FEMALE
    while gender != 'M' and gender != 'F':
        print("Invalid gender, Re-enter gender: ")
        gender = input("Enter gender[M/F]: ")
    

    aptDay=input("Enter appointment day [(M),(T),(W),(H),(F),(S),(U),]: ")
    #VALIDATE APPOINTMEN TDAY MONDAY THROUGH SUNDAY 
    while aptDay != 'U' and aptDay != 'M' and aptDay != 'T' and aptDay != 'W' and aptDay != 'H' and aptDay != 'F' and aptDay != 'S':
        print("Invalid day, Re-enter day: ")
        aptDay = input("Enter appointment day [(M),(T),(W),(H),(F)")
        

    if  aptDay == 'M' or aptDay == 'T' or aptDay == 'W' or aptDay == 'H' or aptDay == 'F':
        aptTime=int(input("Enter appointment [8-20]: "))


    if aptDay == 'S' or aptDay == 'U':
        aptTime=int(input("Enter appointment [10-17]: "))
    #VALIDATE Apointment Time between 8 am to 8pm
    while aptTime< 8 or aptTime> 20:
        aptTime=int(input("Invalid time. Re-enter time: "))


    period=input("Enter period [AM or PM]: ")
    #CHECKS WEEKDAY  AND MORNING PERIOD  BETWEEN 8AM TO 11AM
    if aptDay == 'M' or aptDay == 'T' or aptDay == 'W' or aptDay == 'H' or aptDay == 'F' and period=="AM" and aptTime >= 8 and aptTime < 12:
        validWKMrn = 1

    # CHECKS WEEKDAY  AND EVENING  PERIOD  BETWEEN 12PM TO 9PM
    if aptDay == 'M' or aptDay == 'T' or aptDay == 'W' or aptDay == 'H' or aptDay == 'F' and period == "PM" and aptTime >= 12 and aptTime <= 21:
        validWKEvn = 1

    #CHECKS WEEKEND  AND MORNING PERIOD  BETWEEN 10 TO 11AM
    if aptDay == 'S' or aptDay == 'U' and  period == "AM" and aptTime >= 10 and aptTime < 12:
        validWKEndM = 1

    #CHECKS WEEKDAY  AND MORNING PERIOD  BETWEEN 8AM TO 12PM
    if aptDay == 'S' or aptDay == 'U' and period == "PM" and aptTime >= 12 and aptTime < 17:
        validWKEndE = 1
    #VALIDATES AM OR PM AND PROMPTS TYHE USER TO ENTER EITHER IF INCORRECT INPUT IS ENTERED 
    while period!= 'AM' and period!= 'PM':
        period= input("Invalid time PERIOD. Re-enter time PERIOD: ")

        if aptDay == 'M' or aptDay == 'T' or aptDay == 'W' or aptDay == 'H' or aptDay == 'F' and period == "AM" and aptTime >= 8 and aptTime < 12:
            validWKMrn = 1
        

        if aptDay == 'M' or aptDay == 'T' or aptDay == 'W' or aptDay == 'H' or aptDay == 'F' and period == "PM" and aptTime >= 12 and aptTime <= 21:
            validWKEvn = 1
        

        if aptDay == 'S' or aptDay == 'U' and period == "AM" and aptTime >= 10 and aptTime < 12:
            validWKEndM = 1
        

        if aptDay == 'S' or aptDay == 'U' and period == "PM" and aptTime >= 12 and aptTime < 17:
            validWKEndE = 1
        

     #CHECKS IF APPOINTMENTS ARE EITHER WEEKDAY OR WEEKEND MORNING OR EVENING
    while validWKMrn !=1  and validWKEvn != 1 and validWKEndM != 1 and validWKEndE != 1:
        
        print("Weekday appointments are Mon - Fri - 8:00 AM to 20:00 PM[or 8:00PM]: ")
        print("Weekend appointments are Sat and Sun - 10:00 AM to 17:00 PM[or 5:00PM]: ")
        aptDay=input("RE-enter Day")
        aptTime=input("RE-enter Time")
        period=input("RE-enter period[AM or PM]")

        if aptDay == 'M' or aptDay == 'T' or aptDay == 'W' or aptDay == 'H' or aptDay == 'F' and period == "AM" and aptTime >= 8 and aptTime < 12:
            validWKMrn = 1

        if aptDay == 'M' or aptDay == 'T' or aptDay == 'W' or aptDay == 'H' or aptDay == 'F' and period == "PM" and aptTime >= 12 and aptTime <= 21:
            validWKEvn = 1
        

        if aptDay == 'S' or aptDay == 'U' and period == "AM" and aptTime >= 10 and aptTime < 12:
            validWKEndM = 1
        

        if aptDay == 'S' or aptDay == 'U' and period == "PM" and aptTime >= 12 and aptTime < 17:
            validWKEndE = 1

        

    print("(O)ffice\n\n")
    print("(P)hysical\n\n")
    print("(S)creening\n\n")

    visitType=input("Select the type of visit: ")
    # VALIDATES THE VISIT TYPE AND PROMPS THE USERS TO ENTER THE CORRECT TYPE IF INCORECT TYPE IS ENTERED 
    while visitType != 'O' and visitType != 'P' and visitType != 'S':
        visitType=input("Invalid visit type. Re-enter visit type[O,P,S]: ")

#CALCULATES THE COST OF THE VIST BASED ON THE USERS PREVIOUS INPUTS
    #OFFICE COST BASED ON  WEEKDAY OR WEEND MORNING OR EVENING 
    if visitType == 'O':
        print("(O)ffice\n\n")
        if validWKMrn==1:
            cost = 3000
    
        if validWKEvn == 1:
            cost = 3800
        

        if validWKEndM == 1 or validWKEndE ==1:
            cost = 5000
        

        totalOfficeVisits = totalOfficeVisits + 1

    #PHYSICAL COST BASED ON  WEEKDAY OR WEEND MORNING OR EVENING 
    if visitType == 'P':
        print("(P)hysical\n\n")
        if validWKMrn==1:
            cost = 8000
    
        if validWKEvn == 1:
            cost = 8900
        

        if validWKEndM == 1 or validWKEndE ==1:
            cost = 10000
        

        totalPhysicalVisits = totalPhysicalVisits + 1

        
   # SCREENING COST BASED ON  WEEKDAY OR WEEND MORNING OR EVENING 
    if visitType == 'S':
        print("(S)creening\n\n")
        if validWKMrn==1:
            cost = 15500

        if validWKEvn == 1:
            cost = 16700
            

        if validWKEndM == 1 or validWKEndE ==1:
            cost = 17500


        totalScreeningVisits = totalScreeningVisits + 1 

    
    #CALCULATES COST BASED ON PREVIOUS INPUTS 
    totalCost = REGFEE + cost
    totalCharges = totalCharges + totalCost
        
    print("U-Sunday\n")
    print("M-Monday\n")
    print("T-Tuesday\n")
    print("W-Wednesday\n")
    print("H-Thursday\n")
    print("F-Friday\n")
    print("S-Saturday\n\n")

    print("Patient name is:  \n", patientName)
    print("Patient age is:  \n",age)
    print("Gender is:  \n", gender)
    print("Appointment Day is:  \n", aptDay)
    print("Appointment Time is at: \n",aptTime, period)
    print("Type of Visit: \n",visitType)
    print("Registration fee is: \n",REGFEE)
    print("Cost of Visit:  \n",cost)
    print("Total cost is: \n",totalCost)

    validWKMrn = 0
    validWKEvn = 0
    validWKEndM = 0
    validWKEndE = 0
    # MIMICS THE WHILE CONDITION OF A DO WHILE LOOP AND RE-ENTERS THE LOOP IF THE CONDITION IS FALSE AND EXITS IF THE CONDITION IS MET 
    if patientName == "NO":
        break
  # CALCULATES TOTAL VISITS
totalVisits = totalOfficeVisits + totalPhysicalVisits + totalScreeningVisits


print("Total Office Visits: \n", totalOfficeVisits)
print("Total Physical Visits: \n", totalPhysicalVisits)
print("Total Screening Visits: \n", totalScreeningVisits)

print("Total Visits processed : \n", totalVisits)
print("Total Charges:\n", totalCharges)


