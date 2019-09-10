#include <stdio.h>
int main()
{
    int n, d;
    printf("Introduce two numbers: ");
    scanf("%d %d", &n, &d);
    if (n%d == 0) 
        printf(" %d is divisible by %d\n", n, d);
    else 
	printf("%d Is not divisible by %d\n", n, d);
    return 0;
}
