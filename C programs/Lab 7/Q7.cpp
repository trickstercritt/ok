#include <stdio.h>
#include <string.h>

void calc(char, int *, int *, int *);

int main(){
	
	char sent[100];
	
	printf("Enter a sentence");
	
	gets(sent);
	
	int len = strlen(sent);
	
	int num = 0, i = 0,words = 0,spec = 0;
	
	while(i<len){
		calc(sent[i], &num, &words,&spec);
		
		i++;
	}
	
	printf("The number of numbers, characters, and special characters are %d, %d, and %d", num, words,spec);

}

void calc(char x, int *p, int *q, int *r){
	if(x >= 'a' && x <= 'z'){
		(*q)++;
	}
	else if(x >= 'A' && x <= 'Z'){
		(*q)++;
	}
	else if(x >= '0' && x <= '9'){
		(*p)++;
	}
	else 
		(*r)++;
}
