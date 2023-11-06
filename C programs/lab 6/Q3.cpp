#include <stdio.h>


int main(){
	
	int num[5];
	int x,y;
	int m,k;
	
	printf("Enter 5 numbers");
	
	for(int i = 0; i<5;i++){
		scanf("%d", &num[i]);
	}
	
	printf("Enter 0 for smallest and 1 for largest");
	
	scanf("%d", &x);
	
	if(x == 0){
			printf("Enter the value of m for the mth smallest value");
			
			scanf("%d", &m);
			
			for(int i = 0; i<=m; i++){
				for(int  j= 0; j<4; j++){
					if(num[j]>num[j+1]){
							int t =num[j+1];
							num[j+1]= num[j];
							num[j] = t;
				}
			}
			
		}
		printf("The %d smallest number is %d\n", m, num[m-1]);
	}
	
	
	
	else if(x == 1){
		printf("Enter the value of k for the kth largest value");
	
		scanf("%d", &k);
		
		for(int i = 0; i<=k; i++){
			for(int j = 0; j<4;j++){
					if(num[j]>num[j+1]){
						int t =num[j+1];
						num[j+1]= num[j];
						num[j] = t;
				}
			}
		}
		
		printf("The %d largest number is %d", k, num[5-k]);
	}
	
	return 0;
	
}
