#include <stdio.h>

int main(){
	
	int n, x; 
	
	printf("Please enter n, to print n to 1 in reverse order"); 
	
	scanf("%d", &n); 
	
	while(n>0){
		
		printf("%d ", n);
		
		n = n -1; 
		
	}
	
	return 0; 
}
