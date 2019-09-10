#include<stdio.h>

float rectangle_area(float b, float a); 
float entry();

int main()
{
    float b, h;
    printf("\n Rectangle base: ");
    b = entry();
    printf("\n Rectangle high: ");
    h = entry();
    printf("\n Rectangle area: %.2f", rectangle_area(b,h));

    return 0;
}

/* Return a positive number */
float entry()
{
    float m;
    do {
        scanf("/%f", &m);
    } while (m <= 0.0);
    return m;
}

/*Calculates the rectangle area*/

float rectangle_area(float b, float a)
{
    return (b*a);
}
