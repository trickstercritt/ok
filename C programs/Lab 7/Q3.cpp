#include <stdio.h>

void areaperi(int, float *, float *);

int main(){
	
	int s;
	float area, perimeter;
	
	printf("Enter the value of side");
	
	scanf("%d", &s);
	
	areaperi(s, &area, &perimeter);
	
	printf("The area of the square is %f \n", area);
	printf("The perimeter of the square is %f \n" , perimeter);
	
	return 0;
}

void areaperi(int s, float *area, float *peri){
	
	*area = s * s;
	*peri = 4 * s;
}