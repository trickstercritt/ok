#include <stdio.h>
int main(){
	
	FILE *source, *dest;
	
	source = fopen("source.txt", "r");
	dest = fopen("dest.txt", "w");
	
	char ch;
	
	ch = fgetc(source);
	
	while(ch != EOF){
		
		fprintf(dest, "%c", ch);
		ch = fgetc(source);
	}
	
	fclose(source);
	fclose(dest);
}

