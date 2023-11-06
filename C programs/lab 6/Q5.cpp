#include <stdio.h>

int main(){
	
	int matrix_1[3][3], matrix_2[3][3];
	int i,j,x,y;
	
	printf("Enter the elements of the matrix");
	
	for(i=0; i<3; i++){
		for(j=0;j<3;j++){
			scanf("%d", &matrix_1[i][j]);
		}
	}
		
	for(x=0; x<3; x++){
		for(y=0;y<3;y++){
			scanf("%d", &matrix_1[x][y]);
		}
	}
	
	
	
	
}
