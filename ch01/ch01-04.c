#include <stdio.h>

int main(char **argv, int argc) {
    long nc = 0;
    while(getchar() != EOF)
	 ++nc;
    printf("%ld\n",nc);
    return 0;
}
