#include <stdio.h>

char message[] = "Hello World";

int main(){

	int i;
	for(i = 0;i<sizeof(message);i++)
		printf("%c",message[i]);

	printf("\n");
} 
