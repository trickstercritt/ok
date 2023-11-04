#include <stdio.h>

//swapping two arrays using pointers
int display(int *, int *, int);

int main(){
	
	int n;
	printf("Enter the size of two arrays: ");
	
	scanf("%d", &n);
	
	int a1[n], a2[n];
	
	printf("Enter the elements of the two arrays respectively");
	
	for(int i = 0; i <n; i++){
		scanf("%d", &a1[i]);
	}
	
	for(int j = 0; j <n; j++){
		scanf("%d", &a2[j]);
	}
	
	display(a1,a2,n);
	
	printf("Array 1 after swapping: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a1[i]);
    }
    printf("\n");

    printf("Array 2 after swapping: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a2[i]);
    }
    printf("\n");

	return 0;	
} 

int display(int *a1, int *a2, int p){
	//if we create an array here
	
	for(int i = 0; i<p; i++){
		int t = a1[i];
		a1[i] = a2[i];
		a2[i] = t;
	}
	//a1 is replicated into b1, now we need to assign all a2 values to a1 and then b1 values to a2
	
}