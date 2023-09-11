#include <stdio.h>

int main(){
	int cons_units, cons_id;
	char name; 
	float amt; 
	
	printf("Please enter consumer ID,consumer name,consumed units: "); 

	scanf("%d %c %d",&cons_id, &name, &cons_units); 
	
	if(cons_units < 199){ 
		amt = cons_units * 1.2; 
		
		if(amt<100){
			printf("Sorry! The minimum bill amount is 100 rupees"); 
		}else{
			printf(" Hello %c,your electricity bill amount with respect to your ID %d is %f", name, cons_id, amt); 
		}
	}
	
	else if(cons_units >= 200 && cons_units < 399){ 
		amt = cons_units * 1.5; 
		if(amt<400){
			printf(" Hello %c,your electricity bill amount with respect to your ID %d is %f", name, cons_id, amt);
		}else{
			amt = (cons_units * 1.5 * 0.15 + cons_units *1.5);
			printf(" Hello %c,your electricity bill amount with respect to your ID %d is %f", name, cons_id, amt); 	
		}				
	}
	else if(cons_units >= 400 && cons_units < 599){ 
		amt = cons_units * 1.8*0.15 + cons_units*1.8; 
		printf(" Hello %c,your electricity bill amount with respect to your ID %d is %f", name, cons_id, amt);
	}
	
	else if(cons_units >= 600 && cons_units < 799){
		amt = cons_units * 2.0*0.15 + cons_units * 2.0; 
		printf(" Hello %c,your electricity bill amount with respect to your ID %d is %f", name, cons_id, amt); 
	}
	return 0; 
}
