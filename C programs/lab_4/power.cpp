#include <stdio.h>

int main(){
	
	int num_1, num_2, pow = 1, i;
	
	printf("Please enter two numbers"); 
	
	scanf("%d %d", &num_1, &num_2); 
	
	i = num_2; 
	while(num_2 != 0){
		pow = pow * num_1; 
		
		num_2 = num_2 - 1;
	}
	
	printf("The value of %d raised to the power %d is %d", num_1, i, pow);
	
	return 0;
}
