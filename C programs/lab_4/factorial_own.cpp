#include <stdio.h>

int main(){
	
	int fact = 1 , num, n;
	
	printf("Please enter a number"); 
	
	scanf("%d", &num); 
	
	n = num; 
	
	while(num != 0){
		
		fact = fact*num;
		
		num = num -1;
	}
	
	printf("The factorial of %d is %d",n,fact);
}
