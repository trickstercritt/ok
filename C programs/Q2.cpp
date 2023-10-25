#include <stdio.h>

int sum(int n1, int n2, int n3, int n4, int n5){
	int summation;
	
	summation = n1 + n2 + n3 + n4 + n5; 
	
	return summation; 
}

int main(){	
	int n1,n2,n3,n4,n5, add;
	float avg;
	
	printf("Please enter the 5 numbers");
	 
	scanf("%d %d %d %d %d", &n1, &n2,&n3,&n4,&n5);
	
	add = sum(n1,n2,n3,n4,n5);
		
	avg = add/5;
	
	printf("The average of 5 numbers is %f", avg);
	
	return 0;
}
