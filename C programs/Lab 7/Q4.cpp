#include <stdio.h>

void mat_mul(int *, int *, int *, int);

int main(){
	int n; 
	
	printf("Enter the size of the matrix");
	
	scanf("%d", &n);
	
	int mat1[n][n], mat2[n][n], res[n][n];
	
	printf("Enter the elements of two matrices");
	
	for(int i = 0; i<n;i++){
		for(int j = 0; j<n; j++){
			scanf("%d", &mat1[i][j]);
		}
	}
	
	for(int i = 0; i<n;i++){
		for(int j = 0; j<n; j++){
			scanf("%d", &mat2[i][j]);
		}
	}
	
	mat_mul(&mat1[0][0], &mat2[0][0], &res[0][0], n);
	
	printf("Resultant matrix after multiplication:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
}

void mat_mul(int *mat1, int *mat2, int *res, int n){
	for(int i = 0; i<n; i++){
		for(int j = 0; j<n; j++){
			int sum = 0;
			
			for (int k = 0; k < n; k++) {
                sum += mat1[i * n + k] * mat2[k * n + j];
            }
            
            res[i*n + j] = sum;
		}
	}
}