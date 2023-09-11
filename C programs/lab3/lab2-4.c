#include <stdio.h>

int main(){
	int x_c, y_c; 
	
	printf("Enter the integer coordinates of the point in x-y plane:");
	
	scanf("%d %d", &x_c, &y_c);
	
	if(x_c > 0 && y_c> 0){
		printf("The given coordinate belongs to the 1st quadrant");
	}
	else if(x_c < 0 && y_c > 0){
		printf("The given coordinate belongs to the 2nd quadrant");
	}
	else if(x_c < 0 && y_c < 0){
		printf("The given coordinate belongs to the 3rd quadrant");
	}
	else if(x_c > 0 && y_c < 0){
		printf("The given coordinate belongs to the 4th quadrant");
	}
}
