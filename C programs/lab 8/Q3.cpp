#include <stdio.h>

struct emp{
	char name[20];
	int date;
	int month;
	int year;
};

int main(){
	
	struct emp e[3];
	int date, month, year;
	
	e[0] = (struct emp){"Ram", 18, 2,2020};
	e[1] = (struct emp){"Shyam", 20, 4,2020};
	e[2] = (struct emp){"Ashok", 4, 11, 2020};
	
	printf("Enter the current date month and year in a sequence: ");
	
	scanf("%d %d %d", &date, &month, &year);
	
	for(int i = 0; i<3;i++){
		if(year - e[i].year >= 3){
			if(month - e[i].month >= 0){
				if(date - e[i].date >= 0){
					printf("The employee %d has more than 3 years of experience \n", i+1);
				}
			}
		}
	}
	
	return 0;
}
