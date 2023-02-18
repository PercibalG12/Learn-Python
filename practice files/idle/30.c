//Name: Percival Roberts 
//Date:October 09, 2022
//Description:Continuous Assessment 4- Question #5
# define _CRT_SECURE_NO_WARNINGS// to be able to use scanf in visual studio
#include <stdio.h>
#include <conio.h>

int main()
{
	float check_balance, deposit, withdrawal, new_balance, account_balance;
	int option;


	printf("1.CHECK BALANCE \n2. DEPOSIT \n3. WITHDRAWAL \n");

	printf("Please enter an option (1, 2 or 3): ");
	scanf("%d", &option); 

	switch (option)
	{
	case 1:
	{
		account_balance = 30000;
		printf("Your Account Balance is: %.2f", account_balance);
		break;
	}

	case 2:
	{
		printf("Enter Your Deposit: \n");
		scanf("%f", &deposit);
		if (deposit <= 100000)
		{
			account_balance = 30000;
			new_balance = account_balance + deposit;
			printf("\nYour New Balance is: %.2f\n", new_balance);
		}
		else
		{
			new_balance = 30000;
			printf("\nInvalid input you cannot deposit more than $10000");
			printf("\nYour Balance is: %.2f\n", new_balance);
		}
		break;
	}

	case 3:
	{
		printf("\nEnter The Amount of Money You Would Like to Withdraw: ");
		scanf("%f", &withdrawal);

		if (withdrawal <= 17000)
		{
			account_balance = 30000;
			new_balance = account_balance - withdrawal;
			printf("\nYour New Balance is: %.2f\n", new_balance);
		}
		else
		{
			new_balance = 30000;
			printf("Invalid Input you cannot withdraw more than 17000 \n");
			printf("Your Balance is: %.2f\n", new_balance);
		}
		break;
	}


	default:
		printf("Invalid Input \n");

	}

	return 0;

}
