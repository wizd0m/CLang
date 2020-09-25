#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    int c;
    int* intvalue;

    printf("Before malloc, the addreess of intvalue = %p\n", (void *) &intvalue);

    if(intvalue == NULL)
	    printf("intvalue == null\n");
    else printf("invalue != null\n");

    //   c = (int *) malloc(sizeof(int));
    intvalue = (int *) malloc(sizeof(int));

    if(intvalue == NULL) {
	printf("Memory is not allocated!\n");

	exit(0);
    }
    else 
    {
       intvalue = 10;
       printf("After malloc successfully, the address of intvalue = %p\n", (void *) &intvalue);			
       printf("Intvalue before counting = %d\n", intvalue);    
       while((c = getchar()) != 'q'){
	    intvalue = 11;
       }
 
      printf("Intvalue after counting = %d\n", intvalue);    

      printf("After using, the addreess of intvalue = %p\n", (void *) &intvalue);
     
      //   free(c);
      free(intvalue);
    }
    return 0;
}
