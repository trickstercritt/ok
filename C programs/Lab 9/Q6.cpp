#include <stdio.h>
#include <stdlib.h>
void main()
{
	FILE *ptr;
	ptr = fopen("INPUT.txt","r");
	char ch,line[100],word[10];
	int x = 0,i,j,y = 0;
	do
	{
		ch = fgetc(ptr);
		line[x] = ch;
		x += 1;
	}
	while(ch != EOF);
	line[x] = ' ';
	for(i = 0;i <= x;i++)
	{
		if(line[i] != ' ')
		{
			word[y] = line[i];
			y += 1;
		}
		else
		{
			for(j = y - 1;j >= 0;j--)
			{
				printf("%c",word[j]);
			}
			printf(" ");
			y = 0;
		}
	}
}


