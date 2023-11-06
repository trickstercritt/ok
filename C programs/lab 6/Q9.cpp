#include <stdio.h>
#include <string.h>

int main(){
	
	char str[100] = "We have to count the number of words in this sentence";
	
	int i, x=0, j;
	
	j = strlen(str);
	
	for(i=0; i<j; i++){
		if(str[i] == ' '){
			x++;
		}
	}
	
	int p = x +1;
	printf("The number of words in the sentence is %d",p);
	
	return 0;
}
