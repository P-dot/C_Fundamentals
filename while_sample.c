#include <stdio.h>
int main()
{
    int counter = 0;

    while(counter < 5)
    {
        counter ++; 
	printf ("counter: %d \n", counter);
    }	   
    printf("Terminated counter: %d \n", counter);
    return 0;
}
