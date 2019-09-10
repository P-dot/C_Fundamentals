#include <time.h>
#include <stdio.h>

int main(void)
{
    float begin, end;
    int n, x; 
    long int fact;

    begin = clock();
    
    do {
        printf("Factorial of (3 <x< 15): ");
	scanf("%d", &x);
    } while (x<=3 || x>=15);

    for (n=x,fact=1; x; x--)
	fact*=x;
    end = clock();

    printf("\n Factorial of %d! = %ld", n fact);
    printf("\n Time unit process: %f,\t In Seconds: %f",
		    (begin-end), (begin-end)/CLk_TCK);
}
