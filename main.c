#include "stdio.h"
#include "string.h"
int main(){
	printf("Small Language Model (SLM)\n");
	int cont = 1;
	while(cont){
		printf(">> ");
		char text[1024];
		fgets(text, 1024, stdin);
		int  len    = strlen(text);
		text[len-1] = 0;
		if(!strcmp(text, "quit")){
			cont = 0;
		}else{
			printf("I'm sorry, but as an AI language model, I cannot \"%s\".\n", text);
		}
	}
}
