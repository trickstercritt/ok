#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    if (rows != cols) {
        printf("The matrix must be square (rows should be equal to columns).\n");
        return 1;
    }

    int matrix[rows][cols];
    int sum = 0;


    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }


    for (int i = 0; i < rows; i++) {
        sum += matrix[i][i];
    }

    printf("The sum of the right diagonals of the matrix is: %d\n", sum);

    return 0;
}

