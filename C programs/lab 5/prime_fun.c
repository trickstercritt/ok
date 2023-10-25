#include <stdio.h>

void prime(int n){
	int x = 2; 
	
	while(x <= n - 1){
		
		if(n%x == 0){
			printf("The given number is not prime");
		}
		else{
			printf("The given number is prime");
		}

	}
	
	return;
}
	
int main(){
		int num; 
		
		printf("Please enter the number");
		
		scanf("%d", &num);
		
		prime(num);
		
		return 0;
}

