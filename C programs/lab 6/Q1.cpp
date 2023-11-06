#include <stdio.h>

int check(int, int);

int main(){
	int i, j, num[4];
	
	printf("Please enter 4 numbers");
	
	for(j=0; j<4; j++){
		scanf("%d", &num[j]);
	}
	
	int greatest = num[0];
	for(j=1; j<4; j++){
		greatest = check(greatest, num[j]);
	}
	
	printf("The greatest number is %d", greatest);
	
	return 0;
}

int check(int x, int y){
	int res;
	
	if(x>y)
		res = x;
	else
		res = y;
	
	return res;
}
