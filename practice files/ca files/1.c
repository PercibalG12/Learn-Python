#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main() {

    char Patient_name[20];
    char Appointment_day;
    int Patient_age, Appointment_time;
    char Patient_gender;
    char Visit_type;
    int option;
    float cost = 0.00, morning_fee = 0.00, total_cost = 0.00, registration_fee = 4500.00;
    int counter = 0;

    printf("*******Welcome to doctor Mitchel's Appointment and Billing SYSTEM******* \n\n");
    printf("Please select (1)Weekday or (2)Wekend:");
    scanf("%d", &option);

    do
    {
        switch (option)
        {

        case 1:
            printf(" You have selected a Weekday appointment \n\n");
            printf("Please enter the Patient's name: ");
            scanf("%s", Patient_name);
            printf("Please enter the Patient's gender 'M' OR 'F': ");
            scanf(" %c", &Patient_gender);
            while (1)
            {

                printf("Please enter your age: ");
                scanf("%d", &Patient_age);

                if (Patient_age < 12 || Patient_age>100)
                {
                    printf("Sorry, only ages 13 -100 are valid. Please try again.\n\n");
                }
                else
                {
                    break;
                }
            }
            printf("Appointments days are:(M)Monday, (T)Tuesday (W)Wednesday (H)Thursday & (F)Friday \n\n");
            while (1)
            {
                printf("Please enter the Appointment day: ");
                scanf(" %c", &Appointment_day);

                //MONDAY
                if (Appointment_day == 'M' || Appointment_day == 'm')
                {
                    printf("VISIT TYPES INCLUDE: (P)Physical, (S)Screening and (O)Office \n\n");
                    printf("Please enter the Visit Type: ");
                    scanf(" %c", &Visit_type);

                    if (Visit_type == 'P' || Visit_type == 'p')
                    {
                        printf("Weekdays appointment times are:  8am to 9pm    \n\n");
                        printf("Valid appointment times are:  8am to 8pm  \n\n");
                        printf("For times after noon (12pm and later) please use army time for example 13 to represent 1300 which correlates to 1pm\n");
                        printf("Please enter a valid  Appointment time: ");
                        scanf("%d", &Appointment_time);

                        if (Appointment_time < 8 || Appointment_time>= 20) {
                            printf("Invalid time value. Please try again. \n\n");
                            
                        }

                        else if (Appointment_time>= 8 || Appointment_time <12){
                            morning_fee = 2000.00;
                            cost = 8000.00;
                            total_cost = cost + morning_fee + registration_fee;
                            printf("You have selected a morning appointment the total cost is %.2f \n\n", total_cost);
                            printf("The time selected is %dam. \n\n", Appointment_time);
                        }

                        else if (Appointment_time >= 12) {
                            Appointment_time =Appointment_time - 12;
                            morning_fee = 0.00;
                            cost = 8000.00;
                            total_cost = cost + morning_fee + registration_fee;
                            printf("You have selected a evening appointment the total cost is %.2f  \n\n", total_cost);
                            printf("The time selected is %dpm.\n", Appointment_time);
                        }
                        
                        
                    }

                    if (Visit_type == 'S' || Visit_type == 's')
                    {
                        printf("Weekdays appointment times are:  8am to 9pm    \n\n");
                        printf("Valid appointment times are:  8am to 8pm  \n\n");
                        printf("For times after noon (12pm and later) please use army time for example 13 to represent 1300 which correlates to 1pm\n");
                        printf("Please enter a valid  Appointment time: ");
                        scanf("%d", &Appointment_time);

                        if (Appointment_time < 8 || Appointment_time >= 20) {
                            printf("Invalid time value. Please try again. \n\n");

                        }

                        else if (Appointment_time >= 8 || Appointment_time < 12) {
                            morning_fee = 2000.00;
                            cost = 15500.00;
                            total_cost = cost + morning_fee + registration_fee;
                            printf("You have selected a morning appointment the total cost is %.2f \n\n", total_cost);
                            printf("The time selected is %dam. \n\n", Appointment_time);
                        }

                        else if (Appointment_time >= 12) {
                            Appointment_time = Appointment_time - 12;
                            morning_fee = 0.00;
                            cost = 16700.00;
                            total_cost = cost + morning_fee + registration_fee;
                            printf("You have selected a evening appointment the total cost is %.2f  \n\n", total_cost);
                            printf("The time selected is %dpm.\n", Appointment_time);
                        }


                    }

                    if (Visit_type == 'O' || Visit_type == 'o')
                    {
                        printf("Weekdays appointment times are:  8am to 9pm    \n\n");
                        printf("Valid appointment times are:  8am to 8pm  \n\n");
                        printf("For times after noon (12pm and later) please use army time for example 13 to represent 1300 which correlates to 1pm\n");
                        printf("Please enter a valid  Appointment time: ");
                        scanf("%d", &Appointment_time);

                        if (Appointment_time < 8 || Appointment_time >= 20) {
                            printf("Invalid time value. Please try again. \n\n");

                        }

                        else if (Appointment_time >= 8 || Appointment_time < 12) {
                            morning_fee = 2000.00;
                            cost = 3000.00;
                            total_cost = cost + morning_fee + registration_fee;
                            printf("You have selected a morning appointment the total cost is %.2f \n\n", total_cost);
                            printf("The time selected is %dam. \n\n", Appointment_time);
                        }

                        else if (Appointment_time >= 12) {
                            Appointment_time = Appointment_time - 12;
                            morning_fee = 0.00;
                            cost =38000.00;
                            total_cost = cost + morning_fee + registration_fee;
                            printf("You have selected a evening appointment the total cost is %.2f  \n\n", total_cost);
                            printf("The time selected is %dpm.\n", Appointment_time);
                        }


                    }


                }
                //TUESDAY
                if (Appointment_day == 'T' || Appointment_day == 't')
                {
                    printf("VISIT TYPES INCLUDE: (P)Physical, (S)Screening and (O)Office \n\n");
                    printf("Please enter the Visit Type: ");
                    scanf(" %c", &Visit_type);

                    if (Visit_type == 'P' || Visit_type == 'p')
                    {
                        printf("Weekdays appointment times are:  8am to 9pm    \n\n");
                        printf("Valid appointment times are:  8am to 8pm  \n\n");
                        printf("For times after noon (12pm and later) please use army time for example 13 to represent 1300 which correlates to 1pm\n");
                        printf("Please enter a valid  Appointment time: ");
                        scanf("%d", &Appointment_time);

                        if (Appointment_time < 8 || Appointment_time >= 20) {
                            printf("Invalid time value. Please try again. \n\n");

                        }

                        else if (Appointment_time >= 8 || Appointment_time < 12) {
                            morning_fee = 2000.00;
                            cost = 8000.00;
                            total_cost = cost + morning_fee + registration_fee;
                            printf("You have selected a morning appointment the total cost is %.2f \n\n", total_cost);
                            printf("The time selected is %dam. \n\n", Appointment_time);
                        }

                        else if (Appointment_time >= 12) {
                            Appointment_time = Appointment_time - 12;
                            morning_fee = 0.00;
                            cost = 8000.00;
                            total_cost = cost + morning_fee + registration_fee;
                            printf("You have selected a evening appointment the total cost is %.2f  \n\n", total_cost);
                            printf("The time selected is %dpm.\n", Appointment_time);
                        }


                    }

                    if (Visit_type == 'S' || Visit_type == 's')
                    {
                        printf("Weekdays appointment times are:  8am to 9pm    \n\n");
                        printf("Valid appointment times are:  8am to 8pm  \n\n");
                        printf("For times after noon (12pm and later) please use army time for example 13 to represent 1300 which correlates to 1pm\n");
                        printf("Please enter a valid  Appointment time: ");
                        scanf("%d", &Appointment_time);

                        if (Appointment_time < 8 || Appointment_time >= 20) {
                            printf("Invalid time value. Please try again. \n\n");

                        }

                        else if (Appointment_time >= 8 || Appointment_time < 12) {
                            morning_fee = 2000.00;
                            cost = 15500.00;
                            total_cost = cost + morning_fee + registration_fee;
                            printf("You have selected a morning appointment the total cost is %.2f \n\n", total_cost);
                            printf("The time selected is %dam. \n\n", Appointment_time);
                        }

                        else if (Appointment_time >= 12) {
                            Appointment_time = Appointment_time - 12;
                            morning_fee = 0.00;
                            cost = 16700.00;
                            total_cost = cost + morning_fee + registration_fee;
                            printf("You have selected a evening appointment the total cost is %.2f  \n\n", total_cost);
                            printf("The time selected is %dpm.\n", Appointment_time);
                        }


                    }

                    if (Visit_type == 'O' || Visit_type == 'o')
                    {
                        printf("Weekdays appointment times are:  8am to 9pm    \n\n");
                        printf("Valid appointment times are:  8am to 8pm  \n\n");
                        printf("For times after noon (12pm and later) please use army time for example 13 to represent 1300 which correlates to 1pm\n");
                        printf("Please enter a valid  Appointment time: ");
                        scanf("%d", &Appointment_time);

                        if (Appointment_time < 8 || Appointment_time >= 20) {
                            printf("Invalid time value. Please try again. \n\n");

                        }

                        else if (Appointment_time >= 8 || Appointment_time < 12) {
                            morning_fee = 2000.00;
                            cost = 3000.00;
                            total_cost = cost + morning_fee + registration_fee;
                            printf("You have selected a morning appointment the total cost is %.2f \n\n", total_cost);
                            printf("The time selected is %dam. \n\n", Appointment_time);
                        }

                        else if (Appointment_time >= 12) {
                            Appointment_time = Appointment_time - 12;
                            morning_fee = 0.00;
                            cost = 38000.00;
                            total_cost = cost + morning_fee + registration_fee;
                            printf("You have selected a evening appointment the total cost is %.2f  \n\n", total_cost);
                            printf("The time selected is %dpm.\n", Appointment_time);
                        }


                    }


                }

                //WEDNESDAY
                if (Appointment_day == 'W' || Appointment_day == 'w')
                {
                    printf("VISIT TYPES INCLUDE: (P)Physical, (S)Screening and (O)Office \n\n");
                    printf("Please enter the Visit Type: ");
                    scanf(" %c", &Visit_type);

                    if (Visit_type == 'P' || Visit_type == 'p')
                    {
                        printf("Weekdays appointment times are:  8am to 9pm    \n\n");
                        printf("Valid appointment times are:  8am to 8pm  \n\n");
                        printf("For times after noon (12pm and later) please use army time for example 13 to represent 1300 which correlates to 1pm\n");
                        printf("Please enter a valid  Appointment time: ");
                        scanf("%d", &Appointment_time);

                        if (Appointment_time < 8 || Appointment_time >= 20) {
                            printf("Invalid time value. Please try again. \n\n");

                        }

                        else if (Appointment_time >= 8 || Appointment_time < 12) {
                            morning_fee = 2000.00;
                            cost = 8000.00;
                            total_cost = cost + morning_fee + registration_fee;
                            printf("You have selected a morning appointment the total cost is %.2f \n\n", total_cost);
                            printf("The time selected is %dam. \n\n", Appointment_time);
                        }

                        else if (Appointment_time >= 12) {
                            Appointment_time = Appointment_time - 12;
                            morning_fee = 0.00;
                            cost = 8000.00;
                            total_cost = cost + morning_fee + registration_fee;
                            printf("You have selected a evening appointment the total cost is %.2f  \n\n", total_cost);
                            printf("The time selected is %dpm.\n", Appointment_time);
                        }


                    }

                    if (Visit_type == 'S' || Visit_type == 's')
                    {
                        printf("Weekdays appointment times are:  8am to 9pm    \n\n");
                        printf("Valid appointment times are:  8am to 8pm  \n\n");
                        printf("For times after noon (12pm and later) please use army time for example 13 to represent 1300 which correlates to 1pm\n");
                        printf("Please enter a valid  Appointment time: ");
                        scanf("%d", &Appointment_time);

                        if (Appointment_time < 8 || Appointment_time >= 20) {
                            printf("Invalid time value. Please try again. \n\n");

                        }

                        else if (Appointment_time >= 8 || Appointment_time < 12) {
                            morning_fee = 2000.00;
                            cost = 15500.00;
                            total_cost = cost + morning_fee + registration_fee;
                            printf("You have selected a morning appointment the total cost is %.2f \n\n", total_cost);
                            printf("The time selected is %dam. \n\n", Appointment_time);
                        }

                        else if (Appointment_time >= 12) {
                            Appointment_time = Appointment_time - 12;
                            morning_fee = 0.00;
                            cost = 16700.00;
                            total_cost = cost + morning_fee + registration_fee;
                            printf("You have selected a evening appointment the total cost is %.2f  \n\n", total_cost);
                            printf("The time selected is %dpm.\n", Appointment_time);
                        }


                    }

                    if (Visit_type == 'O' || Visit_type == 'o')
                    {
                        printf("Weekdays appointment times are:  8am to 9pm    \n\n");
                        printf("Valid appointment times are:  8am to 8pm  \n\n");
                        printf("For times after noon (12pm and later) please use army time for example 13 to represent 1300 which correlates to 1pm\n");
                        printf("Please enter a valid  Appointment time: ");
                        scanf("%d", &Appointment_time);

                        if (Appointment_time < 8 || Appointment_time >= 20) {
                            printf("Invalid time value. Please try again. \n\n");

                        }

                        else if (Appointment_time >= 8 || Appointment_time < 12) {
                            morning_fee = 2000.00;
                            cost = 3000.00;
                            total_cost = cost + morning_fee + registration_fee;
                            printf("You have selected a morning appointment the total cost is %.2f \n\n", total_cost);
                            printf("The time selected is %dam. \n\n", Appointment_time);
                        }

                        else if (Appointment_time >= 12) {
                            Appointment_time = Appointment_time - 12;
                            morning_fee = 0.00;
                            cost = 38000.00;
                            total_cost = cost + morning_fee + registration_fee;
                            printf("You have selected a evening appointment the total cost is %.2f  \n\n", total_cost);
                            printf("The time selected is %dpm.\n", Appointment_time);
                        }


                    }


                }

                //THURSDAY
                if (Appointment_day == 'H' || Appointment_day == 'h')
                {
                    printf("VISIT TYPES INCLUDE: (P)Physical, (S)Screening and (O)Office \n\n");
                    printf("Please enter the Visit Type: ");
                    scanf(" %c", &Visit_type);

                    if (Visit_type == 'P' || Visit_type == 'p')
                    {
                        printf("Weekdays appointment times are:  8am to 9pm    \n\n");
                        printf("Valid appointment times are:  8am to 8pm  \n\n");
                        printf("For times after noon (12pm and later) please use army time for example 13 to represent 1300 which correlates to 1pm\n");
                        printf("Please enter a valid  Appointment time: ");
                        scanf("%d", &Appointment_time);

                        if (Appointment_time < 8 || Appointment_time >= 20) {
                            printf("Invalid time value. Please try again. \n\n");

                        }

                        else if (Appointment_time >= 8 || Appointment_time < 12) {
                            morning_fee = 2000.00;
                            cost = 8000.00;
                            total_cost = cost + morning_fee + registration_fee;
                            printf("You have selected a morning appointment the total cost is %.2f \n\n", total_cost);
                            printf("The time selected is %dam. \n\n", Appointment_time);
                        }

                        else if (Appointment_time >= 12) {
                            Appointment_time = Appointment_time - 12;
                            morning_fee = 0.00;
                            cost = 8000.00;
                            total_cost = cost + morning_fee + registration_fee;
                            printf("You have selected a evening appointment the total cost is %.2f  \n\n", total_cost);
                            printf("The time selected is %dpm.\n", Appointment_time);
                        }


                    }

                    if (Visit_type == 'S' || Visit_type == 's')
                    {
                        printf("Weekdays appointment times are:  8am to 9pm    \n\n");
                        printf("Valid appointment times are:  8am to 8pm  \n\n");
                        printf("For times after noon (12pm and later) please use army time for example 13 to represent 1300 which correlates to 1pm\n");
                        printf("Please enter a valid  Appointment time: ");
                        scanf("%d", &Appointment_time);

                        if (Appointment_time < 8 || Appointment_time >= 20) {
                            printf("Invalid time value. Please try again. \n\n");

                        }

                        else if (Appointment_time >= 8 || Appointment_time < 12) {
                            morning_fee = 2000.00;
                            cost = 15500.00;
                            total_cost = cost + morning_fee + registration_fee;
                            printf("You have selected a morning appointment the total cost is %.2f \n\n", total_cost);
                            printf("The time selected is %dam. \n\n", Appointment_time);
                        }

                        else if (Appointment_time >= 12) {
                            Appointment_time = Appointment_time - 12;
                            morning_fee = 0.00;
                            cost = 16700.00;
                            total_cost = cost + morning_fee + registration_fee;
                            printf("You have selected a evening appointment the total cost is %.2f  \n\n", total_cost);
                            printf("The time selected is %dpm.\n", Appointment_time);
                        }


                    }

                    if (Visit_type == 'O' || Visit_type == 'o')
                    {
                        printf("Weekdays appointment times are:  8am to 9pm    \n\n");
                        printf("Valid appointment times are:  8am to 8pm  \n\n");
                        printf("For times after noon (12pm and later) please use army time for example 13 to represent 1300 which correlates to 1pm\n");
                        printf("Please enter a valid  Appointment time: ");
                        scanf("%d", &Appointment_time);

                        if (Appointment_time < 8 || Appointment_time >= 20) {
                            printf("Invalid time value. Please try again. \n\n");

                        }

                        else if (Appointment_time >= 8 || Appointment_time < 12) {
                            morning_fee = 2000.00;
                            cost = 3000.00;
                            total_cost = cost + morning_fee + registration_fee;
                            printf("You have selected a morning appointment the total cost is %.2f \n\n", total_cost);
                            printf("The time selected is %dam. \n\n", Appointment_time);
                        }

                        else if (Appointment_time >= 12) {
                            Appointment_time = Appointment_time - 12;
                            morning_fee = 0.00;
                            cost = 38000.00;
                            total_cost = cost + morning_fee + registration_fee;
                            printf("You have selected a evening appointment the total cost is %.2f  \n\n", total_cost);
                            printf("The time selected is %dpm.\n", Appointment_time);
                        }


                    }


                }

                //Friday
                if (Appointment_day == 'F' || Appointment_day == 'f')
                {
                    printf("VISIT TYPES INCLUDE: (P)Physical, (S)Screening and (O)Office \n\n");
                    printf("Please enter the Visit Type: ");
                    scanf(" %c", &Visit_type);

                    if (Visit_type == 'P' || Visit_type == 'p')
                    {
                        printf("Weekdays appointment times are:  8am to 9pm    \n\n");
                        printf("Valid appointment times are:  8am to 8pm  \n\n");
                        printf("For times after noon (12pm and later) please use army time for example 13 to represent 1300 which correlates to 1pm\n");
                        printf("Please enter a valid  Appointment time: ");
                        scanf("%d", &Appointment_time);

                        if (Appointment_time < 8 || Appointment_time >= 20) {
                            printf("Invalid time value. Please try again. \n\n");

                        }

                        else if (Appointment_time >= 8 || Appointment_time < 12) {
                            morning_fee = 2000.00;
                            cost = 8000.00;
                            total_cost = cost + morning_fee + registration_fee;
                            printf("You have selected a morning appointment the total cost is %.2f \n\n", total_cost);
                            printf("The time selected is %dam. \n\n", Appointment_time);
                        }

                        else if (Appointment_time >= 12) {
                            Appointment_time = Appointment_time - 12;
                            morning_fee = 0.00;
                            cost = 8000.00;
                            total_cost = cost + morning_fee + registration_fee;
                            printf("You have selected a evening appointment the total cost is %.2f  \n\n", total_cost);
                            printf("The time selected is %dpm.\n", Appointment_time);
                        }


                    }

                    if (Visit_type == 'S' || Visit_type == 's')
                    {
                        printf("Weekdays appointment times are:  8am to 9pm    \n\n");
                        printf("Valid appointment times are:  8am to 8pm  \n\n");
                        printf("For times after noon (12pm and later) please use army time for example 13 to represent 1300 which correlates to 1pm\n");
                        printf("Please enter a valid  Appointment time: ");
                        scanf("%d", &Appointment_time);

                        if (Appointment_time < 8 || Appointment_time >= 20) {
                            printf("Invalid time value. Please try again. \n\n");

                        }

                        else if (Appointment_time >= 8 || Appointment_time < 12) {
                            morning_fee = 2000.00;
                            cost = 15500.00;
                            total_cost = cost + morning_fee + registration_fee;
                            printf("You have selected a morning appointment the total cost is %.2f \n\n", total_cost);
                            printf("The time selected is %dam. \n\n", Appointment_time);
                        }

                        else if (Appointment_time >= 12) {
                            Appointment_time = Appointment_time - 12;
                            morning_fee = 0.00;
                            cost = 16700.00;
                            total_cost = cost + morning_fee + registration_fee;
                            printf("You have selected a evening appointment the total cost is %.2f  \n\n", total_cost);
                            printf("The time selected is %dpm.\n", Appointment_time);
                        }


                    }

                    if (Visit_type == 'O' || Visit_type == 'o')
                    {
                        printf("Weekdays appointment times are:  8am to 9pm    \n\n");
                        printf("Valid appointment times are:  8am to 8pm  \n\n");
                        printf("For times after noon (12pm and later) please use army time for example 13 to represent 1300 which correlates to 1pm\n");
                        printf("Please enter a valid  Appointment time: ");
                        scanf("%d", &Appointment_time);

                        if (Appointment_time < 8 || Appointment_time >= 20) {
                            printf("Invalid time value. Please try again. \n\n");

                        }

                        else if (Appointment_time >= 8 || Appointment_time < 12) {
                            morning_fee = 2000.00;
                            cost = 3000.00;
                            total_cost = cost + morning_fee + registration_fee;
                            printf("You have selected a morning appointment the total cost is %.2f \n\n", total_cost);
                            printf("The time selected is %dam. \n\n", Appointment_time);
                        }

                        else if (Appointment_time >= 12) {
                            Appointment_time = Appointment_time - 12;
                            morning_fee = 0.00;
                            cost = 38000.00;
                            total_cost = cost + morning_fee + registration_fee;
                            printf("You have selected a evening appointment the total cost is %.2f  \n\n", total_cost);
                            printf("The time selected is %dpm.\n", Appointment_time);
                        }


                    }


                }
                //break;
            }
            break;


            printf("Please select (1)Weekday or (2)Wekend:");
            scanf("%d", &option);;


        case 2:
            printf(" You have selected a Weekend appointment \n");
            printf("Please enter the Patient's name: ");
            scanf("%s", Patient_name);
            printf("Please enter the Patient's gender 'M' OR 'F': ");
            scanf(" %c", &Patient_gender);
            while (1)
            {
                printf("Please enter your age: ");
                scanf("%d", &Patient_age);

                if (Patient_age < 12 || Patient_age>100)
                {
                    printf("Sorry, only ages 13 -100 are valid. Please try again.\n");
                }
                else
                {
                    break;
                }
            }
            printf("Appointments days are:(S)Saturday and (U)Sunday\n");
            while (1)
            {
                printf("Please enter the Appointment day: ");
                scanf(" %c", &Appointment_day);

                //SATURDAY
                if (Appointment_day == 'S' || Appointment_day == 's')
                {
                    printf("VISIT TYPES INCLUDE: (P)Physical, (S)Screening and (O)Office \n\n");
                    printf("Please enter the Visit Type: ");
                    scanf(" %c", &Visit_type);

                    if (Visit_type == 'P' || Visit_type == 'p')
                    {
                        printf("Weekdays appointment times are:  10am to 5pm    \n\n");
                        printf("Valid appointment times are:  10am to 4pm  \n\n");
                        printf("For times after noon (12pm and later) please use army time for example 13 to represent 1300 which correlates to 1pm\n");
                        printf("Please enter a valid  Appointment time: ");
                        scanf("%d", &Appointment_time);

                        if (Appointment_time < 10 || Appointment_time >= 17) {
                            printf("Invalid time value. Please try again. \n\n");

                        }

                        else if (Appointment_time >= 10 && Appointment_time < 12) {
                            morning_fee = 0.00;
                            cost = 8000.00;
                            total_cost = cost + morning_fee + registration_fee;
                            printf("You have selected a morning appointment the total cost is %.2f \n\n", total_cost);
                            printf("The time selected is %dam. \n\n", Appointment_time);
                        }

                        else if (Appointment_time >= 12 || Appointment_time <=16) {
                            Appointment_time = Appointment_time - 12;
                            morning_fee = 0.00;
                            cost = 8000.00;
                            total_cost = cost + morning_fee + registration_fee;
                            printf("You have selected a evening appointment the total cost is %.2f  \n\n", total_cost);
                            printf("The time selected is %dpm.\n", Appointment_time);
                        }


                    }

                    if (Visit_type == 'S' || Visit_type == 's')
                    {
                        printf("Weekdays appointment times are:  10am to 5pm    \n\n");
                        printf("Valid appointment times are:  10am to 4pm  \n\n");
                        printf("For times after noon (12pm and later) please use army time for example 13 to represent 1300 which correlates to 1pm\n");
                        printf("Please enter a valid  Appointment time: ");
                        scanf("%d", &Appointment_time);

                        if (Appointment_time < 10 || Appointment_time >= 17) {
                            printf("Invalid time value. Please try again. \n\n");

                        }

                        else if (Appointment_time >= 10 && Appointment_time < 12) {
                            morning_fee = 0.00;
                            cost = 15500.00;
                            total_cost = cost + morning_fee + registration_fee;
                            printf("You have selected a morning appointment the total cost is %.2f \n\n", total_cost);
                            printf("The time selected is %dam. \n\n", Appointment_time);
                        }

                        else if (Appointment_time >= 12 || Appointment_time <= 16) {
                            Appointment_time = Appointment_time - 12;
                            morning_fee = 0.00;
                            cost = 16700.00;
                            total_cost = cost + morning_fee + registration_fee;
                            printf("You have selected a evening appointment the total cost is %.2f  \n\n", total_cost);
                            printf("The time selected is %dpm.\n", Appointment_time);
                        }


                    }

                    if (Visit_type == 'O' || Visit_type == 'o')
                    {
                        printf("Weekdays appointment times are:  10am to 5pm    \n\n");
                        printf("Valid appointment times are:  10am to 4pm  \n\n");
                        printf("For times after noon (12pm and later) please use army time for example 13 to represent 1300 which correlates to 1pm\n");
                        printf("Please enter a valid  Appointment time: ");
                        scanf("%d", &Appointment_time);

                        if (Appointment_time < 10 || Appointment_time >= 17) {
                            printf("Invalid time value. Please try again. \n\n");

                        }

                        else if (Appointment_time >= 10 && Appointment_time < 12) {
                            morning_fee = 0.00;
                            cost = 3000.00;
                            total_cost = cost + morning_fee + registration_fee;
                            printf("You have selected a morning appointment the total cost is %.2f \n\n", total_cost);
                            printf("The time selected is %dam. \n\n", Appointment_time);
                        }

                        else if (Appointment_time >= 12 || Appointment_time <= 16) {
                            Appointment_time = Appointment_time - 12;
                            morning_fee = 0.00;
                            cost = 38000.00;
                            total_cost = cost + morning_fee + registration_fee;
                            printf("You have selected a evening appointment the total cost is %.2f  \n\n", total_cost);
                            printf("The time selected is %dpm.\n", Appointment_time);
                        }


                    }


                }
                //SUNDAY
                if (Appointment_day == 'U' || Appointment_day == 'u')
                {
                    printf("VISIT TYPES INCLUDE: (P)Physical, (S)Screening and (O)Office \n\n");
                    printf("Please enter the Visit Type: ");
                    scanf(" %c", &Visit_type);

                    if (Visit_type == 'P' || Visit_type == 'p')
                    {
                        printf("Weekdays appointment times are:  10am to 5pm    \n\n");
                        printf("Valid appointment times are:  10am to 4pm  \n\n");
                        printf("For times after noon (12pm and later) please use army time for example 13 to represent 1300 which correlates to 1pm\n");
                        printf("Please enter a valid  Appointment time: ");
                        scanf("%d", &Appointment_time);

                        if (Appointment_time < 10 || Appointment_time >= 17) {
                            printf("Invalid time value. Please try again. \n\n");

                        }

                        else if (Appointment_time >= 10 && Appointment_time < 12) {
                            morning_fee = 0.00;
                            cost = 8000.00;
                            total_cost = cost + morning_fee + registration_fee;
                            printf("You have selected a morning appointment the total cost is %.2f \n\n", total_cost);
                            printf("The time selected is %dam. \n\n", Appointment_time);
                        }

                        else if (Appointment_time >= 12 || Appointment_time <= 16) {
                            Appointment_time = Appointment_time - 12;
                            morning_fee = 0.00;
                            cost = 8000.00;
                            total_cost = cost + morning_fee + registration_fee;
                            printf("You have selected a evening appointment the total cost is %.2f  \n\n", total_cost);
                            printf("The time selected is %dpm.\n", Appointment_time);
                        }


                    }

                    if (Visit_type == 'S' || Visit_type == 's')
                    {
                        printf("Weekdays appointment times are:  10am to 5pm    \n\n");
                        printf("Valid appointment times are:  10am to 4pm  \n\n");
                        printf("For times after noon (12pm and later) please use army time for example 13 to represent 1300 which correlates to 1pm\n");
                        printf("Please enter a valid  Appointment time: ");
                        scanf("%d", &Appointment_time);

                        if (Appointment_time < 10 || Appointment_time >= 17) {
                            printf("Invalid time value. Please try again. \n\n");

                        }

                        else if (Appointment_time >= 10 && Appointment_time < 12) {
                            morning_fee = 0.00;
                            cost = 15500.00;
                            total_cost = cost + morning_fee + registration_fee;
                            printf("You have selected a morning appointment the total cost is %.2f \n\n", total_cost);
                            printf("The time selected is %dam. \n\n", Appointment_time);
                        }

                        else if (Appointment_time >= 12 || Appointment_time <= 16) {
                            Appointment_time = Appointment_time - 12;
                            morning_fee = 0.00;
                            cost = 16700.00;
                            total_cost = cost + morning_fee + registration_fee;
                            printf("You have selected a evening appointment the total cost is %.2f  \n\n", total_cost);
                            printf("The time selected is %dpm.\n", Appointment_time);
                        }


                    }

                    if (Visit_type == 'O' || Visit_type == 'o')
                    {
                        printf("Weekdays appointment times are:  10am to 5pm    \n\n");
                        printf("Valid appointment times are:  10am to 4pm  \n\n");
                        printf("For times after noon (12pm and later) please use army time for example 13 to represent 1300 which correlates to 1pm\n");
                        printf("Please enter a valid  Appointment time: ");
                        scanf("%d", &Appointment_time);

                        if (Appointment_time < 10 || Appointment_time >= 17) {
                            printf("Invalid time value. Please try again. \n\n");

                        }

                        else if (Appointment_time >= 10 && Appointment_time < 12) {
                            morning_fee = 0.00;
                            cost = 3000.00;
                            total_cost = cost + morning_fee + registration_fee;
                            printf("You have selected a morning appointment the total cost is %.2f \n\n", total_cost);
                            printf("The time selected is %dam. \n\n", Appointment_time);
                        }

                        else if (Appointment_time >= 12 || Appointment_time <= 16) {
                            Appointment_time = Appointment_time - 12;
                            morning_fee = 0.00;
                            cost = 38000.00;
                            total_cost = cost + morning_fee + registration_fee;
                            printf("You have selected a evening appointment the total cost is %.2f  \n\n", total_cost);
                            printf("The time selected is %dpm.\n", Appointment_time);
                        }


                    }


                }
               // break;
            }

            break;


        default:
            break;
        }

    } while ((strcmp(Patient_name, "no") == 0) || (strcmp(Patient_name, "NO") == 0));


    return 0;
}