#include <stdio.h>
#include <string.h>

int main(){
	
	char s[50] = "ram is the @ 123 4 5 smartest boy";
	
	int i,j,x = 0;
	
	j = strlen(s);
	
	for(i=0; i<j;i++){
		
		if(s[i] != ' '){
			x++;
		}
	}
	
	printf("%d", x);
	
	return 0;
}
