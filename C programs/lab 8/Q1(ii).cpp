#include <stdio.h>
#include <string.h>

struct details{
		int rollno;
		char name[50];
		char dept[10];
		char course[5];
		int yoj;
	};

int main(){
	
	char name[50];
	
	struct details s[3];
	s[0] = (struct details){1, "Kethan", "ICE", "BT", 2023};
    s[1] = (struct details){2, "Preeti", "ICE", "BT", 2023};
    s[2] = (struct details){3, "Ganesh", "ECE", "BT", 2023};	
	
	printf("Enter the name for details of the student");
	
	scanf("%s", &name);
	
	for(int i = 0; i<3;i++){
		if(strcmp(s[i].name, name) == 0){
			printf("Details of students are: %d %s %s %d", s[i].rollno, s[i].dept, s[i].course, s[i].yoj);
		}
	}
	return 0;
	
}
