#include <stdio.h>
/* Determine if a number is even or odd; with two functions that call each other: indirect recursivity*/

int even(int n);
int odd(int n);

int main(void)
{
    int n;
    /* Entry: integer > 0 */
    do {
        printf("\nInteger > 0: ");
	scanf("%d", &n);
    } while (n<=0);

    /* Call to the even() function */
    if (even(n))
        printf("The number %d is even.", n);
    else 
	printf("The number %d is odd.", n);
    return 0;
}

int even(int n)
{
    if (n == 0)
        return 1;    /* is even */
    else 
	return odd(n-1);
}

int odd(int n)
{
    if (n == 0)
        return 0;   /* is odd */
    else 
	return even(n-1);
}
