// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
    int sum = 0, n, i; 
    
    printf("Please enter n, for sum of numbers from 1 to n"); 
    
    scanf("%d", &n); 
    
    for(i = 1; i <= n; i++){
    	sum = sum + n;
    	
    	n = n -1;
	}

    printf("The sum of numbers is %d",sum); 
    return 0;
}
