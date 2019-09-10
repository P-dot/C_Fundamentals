#include <stdio.h>

int main()
{
    int a, b, c, bigger;
    printf("\nIntroduce three integer numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b)
        if (a > c) bigger = a;
	else bigger = c;
    else 
    if (b > c) bigger = c;
    else bigger = c;
        printf("The bigger is %d \n", bigger);
    return 0;
}	
