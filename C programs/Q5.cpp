#include <stdio.h>

int fact(int n){
	int prod; 
	
	if(n == 1)
	return 1; 
	return n * fact(n-1);
}

int main(){
	int inp, factorial; 
	
	printf("Please enter a number to calculate factorial");
	
	scanf("%d", &inp);
	
	factorial = fact(inp);
	
	printf("The factorial of %d is %d", inp, factorial);
	
	return 0;
}
