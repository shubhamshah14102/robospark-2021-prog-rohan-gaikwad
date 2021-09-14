#include<stdio.h>

struct customer_data
{
    long int Account_Number;
    char name[30];
    int Balance;
}bank[10]; 

void bal_below_100();
void transaction(int acc_num, int amount, int code);

    int main(){
    int acc_num, amount, code;
for(int i=0 ;i<10 ;i++){
    printf("Enter Account number \n",i+1);
    scanf("%d",&bank[i].Account_Number);
    printf("Enter name of person\n",i+1);
    scanf("%s",bank[i].name);
    printf("Enter bank balance of person\n",i+1);
    scanf("%d",&bank[i].Balance);
}
bal_below_100();
	printf("Enter your account number : ");
	scanf("%d", &acc_num);
	printf("\nEnter 1 for deposit and 0 for withdrawal : ");
	scanf("%d", &code);
	if (code==1)
	{
		printf("\nEnter amount to be deposit : ");
		scanf("%d", &amount);
	}
	else if(code==0)
	{
		printf("\nEnter amount to withdraw : ");
		scanf("%d", &amount);
	}
	transaction(acc_num, amount, code);
return 0;
}

void bal_below_100()
{
	printf("\nAll members with account balance less than 100 are following : ");
	for (int i = 0; i < 10; i++)
	{
		if (bank[i].Balance < 100 )
		{
			printf("\nName : %s", bank[i].name);
			printf("\nAccount Number : %d\n", bank[i].Account_Number);
		}
	}
}


void transaction(int acc_num, int amount, int code)
{
	int i;
	for (i = 0; i < 10 ; i++)
		if (bank[i].Account_Number == acc_num)
			break;
	if (code==0)
	{
		if (bank[i].Balance < amount )
		{
			printf("\nThe balance is insufficient for the specified withdrawal");
			return;
		}
		else
		{
			bank[i].Balance -= amount;
			printf("\nYour new account balance is : %d", bank[i].Balance);
		}
	}
	else
	{
		bank[i].Balance += amount;
		printf("\nYour new account balance is : %d", bank[i].Balance);
	}

}