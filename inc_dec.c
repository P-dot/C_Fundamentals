#include <stdio.h>

/* Test operators ++ and -- */
void main()
{
    int m = 45, n = 75;
    printf(" m = %d, n = %d\n",m,n);
    ++m;
    --n;
    printf("m = %d, n = %d\n",m,n);
    m++;
    n--;
    printf("m = %d, n = %d\n",m,n);
}
