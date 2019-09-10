#include <stdio.h>
#include <stdarg.h>

void maximum(int n,...);

int main(void)
{
    puts("\t\tFIRST SEARCH OF MAXIMUM\n");
    maximum(6,3.0,4.0,-12.5,1.2,4.5,6.4);
    puts("\n\t\tNEW SEARCH OF MAXIMUM\n");
    maximum(4,5.4,17.8,5.9,-17.99);
    return 0;
}

void maximum(int n, ...)
{
    double mx, actual;
    va_list pointer;
    int i;
    va_start(pointer, n);
    mx = actual = va_arg(pointer, double);
    printf("\t\tActual argument: %.2lf\n", actual);
    for (i=2; i<=n; i++)
    {
        actual = va_arg(pointer, double);
	printf("\t\tActual argument: %.2lf\n", actual);
	if (actual > mx)
	{
	   mx = actual;
	}
    }
    printf("\t\tMaximum in the list of %d numbers is %.2lf\n", n, mx);
    va_end(pointer);
}
