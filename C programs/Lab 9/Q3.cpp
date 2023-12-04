#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *ptr;
	char ch;
	int i = 1;
	ptr = fopen("Line.txt","r");
	printf("Line %d:",i);
	do
	{
		ch = fgetc(ptr);
		printf("%c",ch);
		if(ch == '\n')
		{
			i += 1;
			printf("Line %d:",i);
		}
	}
	while(ch != EOF);
}

