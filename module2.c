#include <stdio.h>

int n = 100; /* Definition not declaration */
static int m = 7;

void f(int i)
{
    n += (i+m);
}

void g(void)
{
    printf("n = %d\n", n);
}
