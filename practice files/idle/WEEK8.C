//Author: Percival Roberts 
//Date: October 23, 2022
//Description: Continuous Assessment 6-Question #1

#define _CRT_SECURE_NO_WARNINGS // to allow Visual Studio's compiler to use the scanf function safely 
#include <stdio.h>    
#include <stdlib.h>  

int main()
{
    // declaration of variables;  
    int calculation;
    float result, num_1, num_2;
    do
    {
        printf("CALCULATOR\n ");
        printf(" Select an operation to perform: ");
        printf(" \n 1 Addition  \t \t 2 Subtraction \n 3 Multiplication \t 4 Division \n 5 Exit \n ");

        scanf("%d", &calculation); 
        switch (calculation)
        {

        case 1:
            // Addition 
            printf(" You chose Addition");
            printf("\n Enter  the first number: ");
            scanf(" %f", &num_1);
            printf(" Enter the second number: ");
            scanf(" %f", &num_2);
            result = num_1 + num_2;   
            printf("The result of %f plus %f is: %.2f",num_1,num_2, result);
            break;   

        case 2:
            // Subtraction  
            printf(" You chose Subtraction");
            printf("\n Enter  the first number: ");
            scanf(" %f", &num_1);
            printf(" Enter the second number: ");
            scanf(" %f", &num_2);
            result = num_1 - num_2;
            printf("The result of %f minus %f is: %.2f", num_1, num_2, result);
            break;

        case 3:
            // Multiplication 
            printf(" You chose Multiplication");
            printf("\n Enter  the first number: ");
            scanf(" %f", &num_1);
            printf(" Enter the second number: ");
            scanf(" %f", &num_2);
            result = num_1 * num_2;
            printf("The result of %f times %f is: %.2f", num_1, num_2, result);
            break;

        case 4:
            // Division  
            printf(" You chose  Division");
            printf("\n Enter the first number: ");
            scanf(" %f", &num_1);
            printf(" Enter the second number: ");
            scanf(" %f", &num_2);
            if (num_2 == 0)
            {
                printf(" \n Please enter a value greater than zero  ");
                scanf("%f", &num_2);
            }
            result = num_1 / num_2;   
            printf(" The result of %f divided by %f is: %.2f", num_1, num_2, result);
            break;   

       

        case 5:
            printf(" You chose to Exit the Calculator");
            exit(0);
            break; // break the function  

        default:
            printf(" Invalid Operation, please re enter a number from 1 to 4 for calculation and 5 to exit  ");
            break;
        }
        printf(" \n \n ********************************************** \n ");
    } while (calculation != 5);

    return 0;
}