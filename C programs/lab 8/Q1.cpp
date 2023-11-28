#include <stdio.h>
#include <string.h>

int main(){
	
	printf("Enter the roll number, name, department, course and year of joining");
	
	struct details{
		int rollno;
		char name[50];
		char dept[10];
		char course[5];
		int yoj;
	};
	
	struct details s[3];
	
	for(int i = 0; i<3;i++){
		scanf("%d %s %s %s %d", &s[i].rollno, &s[i].name, &s[i].dept, &s[i].course, &s[i].yoj);
	}
	
	for(int i = 0;i<3;i++){
		if(strcmp(s[i].dept, "ICE") == 0){
			printf("The student %d is from ICE Branch \n", i+1);
		}
	}	
	
	return 0;
	
}
