#include <stdio.h>

void swap(int *, int *);

int main(){
	
	int n;
	
	printf("Enter the number of elements in the array");
	
	scanf("%d", &n);
	
	int num[n];
	
	printf("Enter all the elements");
	
	for(int i = 0; i<n;i++){
		scanf("%d", &num[i]);
	}
	
	for (int i = 0; i < n / 2; i++) {
        swap(&num[i], &num[n - 1 - i]);
    }
    
	printf("The reversed list of arrays is: \n");
	
	for(int i = 0; i<n; i++){
		printf("%d ", num[i]);
	}
}

void swap(int *x, int *y){
	
	int t; 
	
	t = *x;
	*x = *y;
	*y = t;
	
}