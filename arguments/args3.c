#include <stdio.h>

int main(int argc , int *argv[]){

	int i;
	for (i = 0 ; i < sizeof(argv); i++)
		if(i == argc)
			printf("NULL\n");
		else
			printf("%s\n",argv[i]);

	return 0;
}
