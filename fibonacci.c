#include <stdio.h>

long int fibonacci();

int main()
{
    int n, i;
    printf("\nHow many fibonacci number is there ?: ");
    scanf("%d", &n);
    printf("\nFibonacci sequence: 0, 1");
    for(i=2; i<n; i++)
       printf(",%1d", fibonacci());
    return 0;
}
long int fibonacci()
{
    static int x = 0;
    static int y = 1;
    y = y - x;
    x = y - x;
    return y;
}

