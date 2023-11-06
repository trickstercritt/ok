#include <stdio.h>

int main(){
	int arr[10], hash[10] = {0,0,0,0,0,0,0,0,0,0};
	printf("Enter the attendance");
	
	for(int i = 0; i<= 9; i++){
		scanf("%d", &arr[i]);
	}
	int j;
	for(j = 0; j<10; j++){
		int x = arr[j];
		hash[x-1] = 1;
	}
	
	for(int k = 0; k<10;k++){
		if(hash[k] == 0){
			printf("%d", k+1);	
		}
	}
	
	return 0;
}
