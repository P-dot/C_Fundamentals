#include <stdio.h>
int main()
{
    int n, d;
    printf( "Introduce two integers: " );
    scanf("%d %d", &n ,&d);
    if (n%d == 0)
       printf("%d is divisible by %d\n", n, d);
    else 
       printf("%d is not divisible by %d\n", n, d);
    return 0;
}
