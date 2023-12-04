#include <stdio.h>
struct date
{
	unsigned day : 5;
	unsigned month : 4;
	unsigned year : 12;	
};
int main()
{
	int i,j;
	struct date temp;
	struct date d[] = {{2,1,2023},{23,9,2021},{16,3,2020},{8,2,2012},{25,10,2015}};
	for(i = 0;i < 5;i++)
	{
		for(j = i;j < 5;j++)
		{
			if(d[i].year > d[j].year)
			{
				temp = d[i];
				d[i] = d[j];
				d[j] = temp;
			}
		}
	}
	for(i = 0;i < 5;i++)
	{
		printf("%d/%d/%d\n",d[i].day,d[i].month,d[i].year);
	}
}

