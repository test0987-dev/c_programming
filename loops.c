#include <stdio.h>


int main (int argc, char*argv[]){
	int i = 0;
	printf("Hello am learning C\n");
	printf("Number of arguments to main function: %d\n", argc);
	for (i=0; i<argc; i++){
		printf("argurment number %d is %s\n", i, argv[i]);
	}
	return 0;
}
