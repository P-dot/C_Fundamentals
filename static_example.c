#include <stdio.h>
/*Prototype of the function*/

void static_example(int);

void main()
{
    static_example(1);
    static_example(2);
    static_example(3);
}

/* Example of the use of a static variable */

void static_example(int call)
{
    static int count;
    if (call == 1)
        count = 1;
    printf("\n The count value at call nº %d is: %d", call, count);
    ++count;
}
