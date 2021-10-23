#include <stdio.h>
int main()
{
	int cmd;
	float balance = 0.0f, credit, debit;
	printf("*** ACME checkbook-balancing program *** \n");
	printf("COMMANDS -> 0=clear , 1 = credit , 2 = debit , 3 =balance , 4 = exit");
	while (1)
	{
		printf("Enter command : ");
		scanf_s("%d", &cmd);
		switch (cmd)
		{
		case 0 :
			balance = 0.0f;
			break;
		case 1:
			printf("Enter the amount of credit :");
			scanf_s("%f", &credit);
			balance += credit;
			break;
		case 2:
			printf("Enter the amount of debit ");
			scanf_s("%f", &debit);
			balance -= debit;
			break;
		case 3:
			printf("The Current balance is %.2f", balance);
			break;
		case 4:
			return 0;
		default:
			printf("Sorry its wrong command ");
			break;
		}


	}
	
}
