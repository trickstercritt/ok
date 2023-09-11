#include <stdio.h>

int main(){
	char alphabet; 
	
	printf("Please enter the alphabet in small case :"); 
	
	scanf("%c", &alphabet); 
	
	if(alphabet == 'a' || alphabet == 'e' || alphabet == 'i' || alphabet == 'o' || alphabet == 'u')
		{
			printf("%c is a vowel", alphabet); 
		}
	else{
		printf("%c is a consonant", alphabet);
		}
	return 0; 
}
