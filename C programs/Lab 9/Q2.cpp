#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *ptr1,*ptr2;
	char ch;
	ptr1 = fopen("Text_01.txt","a+");
	ptr2 = fopen("Text_02.txt","r+");
	do
	{
		ch = fgetc(ptr2);
		if((int)ch >= 97 && (int)ch <= 122)
		{
			fputc(ch - 32,ptr1);
		}
		else
		{
			fputc(ch,ptr1);
		}
	}
	while(ch != EOF);
	printf("File converted and appended");
}


