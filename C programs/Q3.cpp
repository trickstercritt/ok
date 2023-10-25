#include <stdio.h>

int area(int n){
	int ar; 
	
	ar = n * n; 
	
	return ar;
}

int main(){
	int side, a; 
	
	printf("Please enter the value of side of the square"); 
	
	scanf("%d", &side); 
	
	a = area(side); 
	
	printf("The area of the square is %d", a); 
	
	return 0;
}

