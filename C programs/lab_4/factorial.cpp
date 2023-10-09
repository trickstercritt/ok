#include <stdio.h>

int main(){
	
	int num, fact =1, n;
	
	printf("Please enter the number"); 
	
	scanf("%d", &num); 
	
	n = num;
	
	while(num != 0){
		fact = fact*num;
		
		num = num -1;
	}
	
	printf("The factorial of %d is %d",n, fact);
}
