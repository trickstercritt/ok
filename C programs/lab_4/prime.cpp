#include <stdio.h>

int main(){
	
	int x, num; 
	
	printf("Enter the number"); 
	
	scanf("%d", &num); 
	
	x = 2; 
	
	while(x <= num-1){
		
		if(num%x == 0){
			printf("The given number is not prime");
			
			break;
		}
		x++;
	}
	
	if(num == x){
		printf("The given number is prime");
	}
	
	return 0;
}
