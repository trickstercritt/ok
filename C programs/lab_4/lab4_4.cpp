#include <stdio.h>

int main(){
	int num, reversed;
	
	printf("Enter a number"); 
	
	scanf("%d", &num); 
	
	while(num != 0){
		int digit = num%10; 
		reversed = reversed * 10 + digit; 
		
		num = num/10;
	}
	
	printf("The reversed number is %d", reversed);
}
