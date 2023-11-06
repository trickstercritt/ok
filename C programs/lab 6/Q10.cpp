#include <stdio.h>
#include <string.h>

int main(){
	
	char str[50] = "ram is the @ 123 smartest boy";
	
	printf("Enter your string");
	
	gets(str);
	
	int i = 0;
	int freq1 = 0, freq2 = 0, freq3 = 0;
	
	while(str[i] != '\0'){
		int x = int(str[i]);
		
	
			if(x> 47 && x<58){
				freq2++;
			}
			else if(x> 64 && x<91){
				freq1++;
			}
			else if(x> 96 && x<123){
				freq1++;
			}
			else{
				freq3++;
			}				
		
		i++;
	}	
	printf("The number of characters, numbers, and special characters in the given string are %d, %d, and %d", freq1, freq2, freq3);
		
	

	return 0;
}
