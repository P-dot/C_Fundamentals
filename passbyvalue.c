#include <stdio.h>

void localDemo(int value);

void main(void)
{
    int n = 10;
    printf("Before to call at localDemo, n = %d\n", n);
    localDemo(n);
    printf("After to call at localDemo, n = %d\n", n);
}

void localDemo(int value)
{
    printf("Into the localDemo, value = %d\n", value);
    value = 999;
    printf("Into the localDemo, value = %d\n", value);
}
