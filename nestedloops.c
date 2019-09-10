#include <stdio.h>

void main()
{
    int i, j;
    // Header of exit 
    printf("\n\t\t i \t j\n");
        for (i = 0; i < 4; i++){
          
            printf("External\t %d\n",i);
	    for (j = 0; j < i; j++){
		printf("Internal\t\t %d \n", j);
	    }
	}
}
