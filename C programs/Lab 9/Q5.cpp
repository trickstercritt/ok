#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *ptr,*ptr1;
	char line[100],ch,word[15],j = 0,k;
	int x = 0,i;
	ptr = fopen("Replace.txt","r");
	ptr1 = fopen("New.txt","w");
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
			word[j] = line[i];
			j += 1;
		}
		else if(line[i] == ' ')
		{
			if(j == 2)
			{
				if(word[0] == 'a' && word[1] == 'n')
				{
					
				}
				else
				{
					for(k = 0;k < j;k++)
					{
						fputc(word[k],ptr1);
					}
				}
			}
			else if(j == 3)
			{
				if(word[0] == 't' && word[1] == 'h' && word[2] == 'e')
				{
					
				}
				else
				{
					for(k = 0;k < j;k++)
					{
						fputc(word[k],ptr1);
					}
				}
			}
			else if(j == 1)
			{
				if(word[0] == 'a')
				{
					
				}
				else
				{
					for(k = 0;k < j;k++)
					{
						fputc(word[k],ptr1);
					}
				}
			}
			else
			{
				for(k = 0;k < j;k++)
				{
					fputc(word[k],ptr1);
				}
			}
			j = 0;
			fputc(' ',ptr1);
		}
	}
	printf("Changed and written");
}


