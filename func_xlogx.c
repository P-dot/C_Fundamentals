#include <stdio.h>
#include <math.h>

int main()
{
    float f, x;
    int x_positive;
    x_positive = 0;
    

    while (!x_positive)
    {
        printf("value of x: ");
	scanf("%f", &x);
	x_positive = (x > 0.0);  
    }
    f = x*log(x);
    printf(" f(%.1f) = %.3e", x, f);
    return 0;
}
