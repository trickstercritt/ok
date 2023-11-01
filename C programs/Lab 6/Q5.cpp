#include <stdio.h>

int main() {
    
    int n; 
    
    printf("Please enter the size of the matrix");
    scanf("%d", &n);
    
    int matrix1[n][n], matrix2[n][n];
    
    printf("Please enter the elements of the matrices");
    
    for(int i=0; i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&matrix1[i][j]);
        }
    }
    for(int i=0; i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&matrix2[i][j]);
        }
    }
   int equal = 1;  // Assume matrices are equal

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix1[i][j] != matrix2[i][j]) {
                equal = 0;  // Matrices are not equal
                break;
            }
        }
        if (!equal) {
            break;
        }
    }

    if (equal) {
        printf("The two matrices are equal.\n");
    } else {
        printf("The two matrices are not equal.\n");
    }
    
    
}
