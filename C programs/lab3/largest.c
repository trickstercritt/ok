#include <stdio.h>

int main(){
	int n1, n2, n3; 
	
	printf("Please enter three numbers for comparision: "); 
	
	scanf("%d %d %d", &n1, &n2, &n3); 
	
	if (n1 == n2 && n2 == n3){
		printf("The given three numbers are equal");
	}
	else if(n1 > n2 && n1 > n3){
		printf("&d is the largest number", n1);
	}
	else if(n2 > n1 && n2 > n3){
		printf("%d is the largest number", n2);
	}
	else if(n3 > n1 && n3 > n2){
		printf("%d is the largest number", n3);
	}
	
	return 0;
}
