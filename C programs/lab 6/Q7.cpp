#include <stdio.h>
#include <string.h>

int main(){
	
	char a[50] = "Gojo is the Strongest";
	char toFind[] = "the";
	
	int j;
	
	j = strlen(a);
	
	for(int i = 0; i<j;i++){
		
		int match = 1;
		
		for(int k =0; k<3; k++){
			if(a[i+k] != toFind[k]){
				match = 0;
				break; // here for eg, the is first word used in the sentence so a[0] = t and toFind[[0] is also t, as they are matching the value of match will be changed to 0; and thus the loop will break without printing the char
			}
		}
		if(match){
			i += 2; // We are only incrementing by 2, as at the end of the loop it will increment once again
		}
		else{
			printf("%c", a[i]);
		}
	}
	
	return 0;
}
