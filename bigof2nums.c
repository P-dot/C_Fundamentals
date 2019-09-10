#include <stdio.h>

int main()
{
    int x, y;
    printf("Introduce two numbers: ");
    scanf("%d %d", &x, &y);
    if (x > y)
        printf("%6d\n", x);
    else 
	printf("%6d\n", y);
    return 0;
}
