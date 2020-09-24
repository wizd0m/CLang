#include<stdio.h>

int main(int argc, char *argv[]) {
	if(argc > 1) {
	  int count = 1;
	  while( count < argc ) {
	     printf("count = %d; value = %s\n", count, argv[count]);
	     count++;
	  }
	} else 
	  printf("Hello, World!\n");
	return 0;
}
