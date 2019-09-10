#include <stdio.h>

int max(int x, int y)
{
    if (x < y)
       return y;
    else 
       return x;
}

int main()
{
    int m, n;
    do {
        scanf("%d %d", &m, &n);
        printf("The maximum value of %d, %d is the number %d\n", max(m, n)); // Called to max
    } while(m != 0);
    return 0;
}
