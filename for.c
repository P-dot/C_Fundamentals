#include <math.h>
#include <stdio.h>

#define M 15
#define f(x) exp(2*x) - x

int main()
{
    int i;
    double x;
    for (i = 1; i <= M; i++)
    {
        printf("Value of x: ");
	scanf("%1f", &x);
        printf("f(%.11f) = %4.g\n", x, f(x));
    }
    return 0;
}
