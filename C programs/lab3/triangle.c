#include <stdio.h>

int main(){
	int angle_1, angle_2, angle_3, sum; 
	
	printf("Please enter the three angles of the triangle");
	
	scanf("%d %d %d", &angle_1, &angle_2, &angle_3);
	
	sum = (angle_1 + angle_2 + angle_3); 
	
	if(sum == 180){
	
		if(angle_1 == angle_2 && angle_2 == angle_3){
			printf("The triangle is an equilateral triangle");
		}
		else if(angle_1 == angle_2 || angle_1 == angle_3 || angle_2 == angle_3){
			printf("The triangle is an isosceless triangle");
		}
		else if(angle_1 != angle_2 || angle_2 != angle_3 || angle_1 != angle_3){
			printf("The triangle is a scalene triangle");
		}
	}else{
		printf("The given angles are not of a valid triangle");
	}
	return 0;
}
