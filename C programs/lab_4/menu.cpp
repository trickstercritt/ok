#include <stdio.h>
#include <conio.h>

int main(){
	int b = 0;
	while(b <= 10){
		int i, rep, num, res, n; 
	
		printf("Enter your input");
		
		scanf("%d", &i); 
		switch(i){
		
			case 1:
	
	            //code for factorial functionality
	            printf("Enter an integer: ");
	            scanf("%d", &num);
	            n=num;
	            res=num;
	            while(num>1)
	            {
	                res = res*(num-1);
	                num = num-1;
	            }
	            printf("\nFactorial of %d is %d. \n\n",n, res);
	            break;
				
			case 2:
				int x, num; 
				
				printf("Enter the number"); 
				
				scanf("%d", &num); 
				
				x = 2; 
				
				while(x <= num-1){
					
					if(num%x == 0){
						printf("\nThe given number is not prime\n");
						
						break;
					}
					x++;
				}
				
				if(num == x){
					printf("\nThe given number is prime\n");
				}
				break;
			case 3:
				int p; 
				
				printf("Enter a number to test for odd or even"); 
				
				scanf("%d", &p); 
				
				if(p%2 == 0){
					printf("The given number is even\n");
				}
				else{
					printf("The given number is odd\n");
				}
				break;	
			case 4:
				default:
					printf("default\n");
				break;
		}
	}
		
}
