#include <stdio.h>

int sum(int n){
	
	if(n==0)
	return 0; 
	return n + sum(n-1);
}

int main(){
	int num,s; 
	
	printf("Enter the value of n upto which the sum needs to be calculated");
	
	scanf("%d", &num);
	
	s = sum(num);
	
	printf("The sum of natural numbers upto n is %d", s);
	
	return 0;
}
