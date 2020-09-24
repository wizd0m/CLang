#include <stdio.h>

int main(char **argv, int agrc) {
    int c;
    while((c = getchar()) != EOF) 
	  putchar(c);
    return 0;
}
