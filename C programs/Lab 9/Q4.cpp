#include <stdio.h>
#include <stdlib.h>
struct date
{
	int d;
	int m;
	int y;
};
struct employee
{
	int empcode;
	char empname[20];
	struct date da;
	float salary;
};
int isgreater(struct date d1,struct date d2)
{
	if(d1.y > d2.y)
	{
		return 1;
	}
	else if(d1.y < d2.y)
	{
		return 0;
	}
	else
	{
		if(d1.m > d2.m)
		{
			return 1;
		}
		else if(d1.m < d2.m)
		{
			return 0;
		}
		else
		{
			if(d1.d > d2.d)
			{
				return 1;
			}
			else if(d1.d < d2.d)
			{
				return 0;
			}
			else
			{
				return 0;
			}
		}
	}
}
void main()
{
	FILE *ptr;
	char name[100];
	int i,j;
	ptr = fopen("Data.txt","r");
	if(ptr != NULL)
		printf("File read\n");
	struct employee e[4],temp;
	for(i = 0;i < 4;i++)
	{
		fscanf(ptr,"%d\n%s\n%d\n%d\n%d\n%f\n",&e[i].empcode,&e[i].empname,&e[i].da.d,&e[i].da.m,&e[i].da.y,&e[i].salary);
	}
	for(i = 0;i < 3;i++)
	{
		for(j = 0;j < 3;j++)
		{
			if(!isgreater(e[j].da,e[j + 1].da))
			{
				temp = e[j];
				e[j] = e[j + 1];
				e[j + 1] = temp;
			}
		}
	}
	fclose(ptr);
	ptr = fopen("Data.txt","w");
	for(i = 0;i < 4;i++)
	{
		fprintf(ptr,"Emp Code : %d\nName : %s\nDOB : %d-%d-%d\nSalary : %f\n\n",e[i].empcode,e[i].empname,e[i].da.d,e[i].da.m,e[i].da.y,e[i].salary);
	}
	printf("File written");
}

