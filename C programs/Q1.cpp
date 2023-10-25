#include <stdio.h>

 void check(int x){
	if(x%2 == 0){
		printf("Even"); 
	}
	else{
		printf("Odd");
	}
	
	return;
 }
 
int main(){
	int n; 
	scanf("%d", &n);
	
	check(n); 
	return 0;
}
