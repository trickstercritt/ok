#include <stdio.h>

//sum of right diagonals 
int display(int *);

int main() {
    
    int n;

  int sum=0;
 
  printf("Enter the size of matrix: ");

  scanf("%d", &n);
  
   int matrix[n][n];
  
  printf("Enter the elements of the matrix");
  
  for(int i = 0; i<n; i++){
    for(int j=0; j<n; j++){
      scanf("%d", &matrix[i][j]);
    }
  }

  for(int i=0; i<n;i++){
    sum += matrix[i][n-i-1];
  }

  printf("The sum of right diagonals is %d", sum);

  
  return 0;
}

