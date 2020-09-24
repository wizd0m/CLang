#include <stdio.h>
#define IN	1
#define OUT	0

int main(char **argv, int argc) {
    long nw, nc, c_tab, c_enter, c_space, c_backspace;
    int c, state;
    
    nw = nc = c_tab = c_enter = c_space = c_backspace = 0;
    state = OUT;

    printf("To exit program Press Ctl+D:\n");
    while((c = getchar()) != EOF) {
	 if(c == '\t')
	    ++c_tab;
	 if(c == ' ')
            ++c_space;
	 if(c == '\b')
            ++c_backspace;
	 if(c == '\n')
            ++c_enter;
	 if(c == ' ' || c == '\t' || c == '\n') 
            state = OUT;
	 else if(state == OUT) {
            state = IN;
	    ++nw;
	 }
    }
    printf("Total character is %ld\nWords = %ld\nTab = %ld\nEnter = %ld\nSpacebar = %ld\nBackspace = %ld\n", nc, nw, c_tab, c_enter, c_space, c_backspace);
    
    return 0;
}
