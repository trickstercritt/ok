#include <stdio.h>

//Using pointer write a program to find out the smallest integer from array of 25 int
int check(int *, int *);

int main(){
	
	int num[7];
	int res;
	
	printf("Enter 7 numbers");
	
	for(int i = 0; i<7; i++){
		scanf("%d", &num[i]);
	}
	
	for(int j = 0; j<7; j++){
			for(int i = 0; i<7; i++){
			
			res = check(&num[i],&num[i+1]);
			
			if(res == 1){
				int t = num[i];
				num[i] = num[i+1];
				num[i+1] = t;
			}
		}
	}
	
	printf("The smallest integer of the array is %d", num[0]);
	
	return 0;
}

int check(int *x, int *y){
	
	if(*x > *y)
		return 1;
	else if(*x < *y)
		return 0;
}