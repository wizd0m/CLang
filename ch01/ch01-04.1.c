#include <stdio.h>

int main(char **argv, int argc) {
    long nc = 0;
    long c_tab, c_enter, c_space, c_backspace;
    int c;

    c_tab = c_enter = c_space = c_backspace = 0;

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
	 ++nc;
    }
    printf("Total character is %ld\nTab = %ld\nEnter = %ld\nSpacebar = %ld\nBlackspace = %ld\n",nc, c_tab, c_enter, c_space, c_backspace);
    
    return 0;
}
