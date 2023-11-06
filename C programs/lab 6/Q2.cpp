#include <stdio.h>

int OddEven(int);

int main(){
	
	int i,j,result;
	
	int x = 0, y = 0;
	int a,b;
	
	printf("Please enter 5 numbers \n");
	
	int num[5];
	int even[5], odd[5];
	
	for(i = 0;i<5; i++){
		scanf("%d", &num[i]);
	}
	
	for(i=0; i<5;i++){
		result = OddEven(num[i]);
		
		if(result == 0){
			even[x] = num[i];
			x++;
		}
		else{
			odd[y] =num[i];
			y++;
		}
	}
	
	for(a = 0;a<x; a++){
		printf("Even = %d\n", even[a]);
	}
	for(b = 0;b<y; b++){
		printf("Odd = %d\n", odd[b]);
	}
}

int OddEven(int x){
	int res;
	
	if(x%2 == 0)
		res = 0;
	else
		res = 1;
		
	return res;
}
