#include <stdio.h>
#include <stdlib.h>
struct bank
{
	int accountno;
	char *name;
	int balance;
};
void less(struct bank *b)
{
	struct bank *i;
	char *j;
	for(i = b;i <= b + 1;i++)
	{
		if(i->balance <= 100)
		{
			printf("%s",i->name);
			printf("\n");
		}
	}
}
void withdrawnordeposit(struct bank *b,int acc,int amount,int mode)
{
	struct bank *i;
	if(mode == 0)
	{
		for(i = b;i <= (b + 1);i++)
		{
			if(i->accountno == acc)
			{
				if(i->balance - amount <= 100)
				{
					printf("Insufficient balance");
					printf("Your balance : %d",i->balance);
				}
				else
				{
					i->balance -= amount;
					printf("Your balance : %d",i->balance);
				}
			}
		}
	}
	else
	{
		for(i = b;i <= (b + 1);i++)
		{
			if(i->accountno == acc)
			{
				i->balance += amount;
				printf("Your balance : %d",i->balance);
			}
		}
	}
}
int main()
{
	struct bank *b;
	char a[5];
	int acc,amount,mode;
	b = (struct bank*)malloc(41);
	b->accountno = 143;
	b->name = "Ram";
	b->balance = 3043;
	(b + 1)->accountno = 144;
	(b + 1)->name = "Shyam";
	(b + 1)->balance = 30;
	less(b);
	printf("Enter account number,amount,mode\n");
	scanf("%d,%d,%d",&acc,&amount,&mode);
	withdrawnordeposit(b,acc,amount,mode);
}

