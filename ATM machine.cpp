#include <stdio.h>
int main ()
{
	//ATM MACHINE CODING
    int password,wtdr,no;
    int balance = 45000;
    int rmbalance = balance;
	 int deposit;
	printf("ATM machine \n");
    printf("Enter your password:--");
    scanf("%d",&password);
    if(password=2204)
    {
        printf("Your ballance is %d \n",balance);
    }
    exit:
    printf("press 1 for withdrawl\n");
	printf("press 2 for balance inquiry\n");
	printf("press 3 for deposit \n");
	printf("press 4 for exit\n");
	scanf("%d",&no);
	
	printf("===========================\n");
	// from here the condition statement start
	switch(no)
	{
		case 1: printf("Enter the amount for withdrawl:");
		scanf("%d",&wtdr);
		rmbalance = (balance-wtdr);
		printf("Remaining balance in account xxx2204 == %d \n",rmbalance);
		break;		
				
		case 2: printf("Your account balance == %d \n",rmbalance);
		break;
		
		case 3: printf("Enter the amount for deposit:");
		scanf("%d",&deposit);
		rmbalance = balance + deposit;
		printf("\nBalance in account xxx2204 == %d \n",rmbalance);
		break;
		
		case 4: printf("Thank you visit again \n");
		if(no==4)
		{
		goto retu;
		}
		break;
		 
		default: printf("You entered a wrong option");
	}
	printf("====================== \n");
	
	goto exit;
	retu:
	return 0;
}
