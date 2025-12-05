#include <stdio.h>
 int main() {
	int choice;
	float balance = 0, amount;
	while(1)
	{
		printf(" Deposit\n");
		printf(" Withdraw\n");
		printf(" Check Balance\n");
		printf(" Exit\n");
		printf("Enter choice: ");
		scanf("%d", &choice);

		if(choice ==1)
		{
			printf("Enter amount to deposit: ");
			scanf("%f", &amount);
			balance += amount;
			printf("Amount Deposited\n");
		}

		else if(choice == 2)
		{
			printf("Enter amount to withdraw: ");
			scanf("%f", &amount);

			if(amount > balance){
				printf("Insufficient Balance\n");
			}
			else {
			balance -= amount;
			printf("Amount Withdrawn\n");
			}
		
		}
		else if(choice == 3)
		{
			printf("Your Balance: %.2f\n", balance);
		}

		else if(choice == 4)
		{
			printf( "Exiting\n");
			break;
		}

		else
		{
			printf("Invalid Choice! Try Again\n");
		}
	}
	return 0;
}
