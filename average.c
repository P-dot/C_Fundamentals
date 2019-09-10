#include <stdio.h>

double average(double x1, double x2)
{
    return(x1 + x2)/2;
}

int main()
{
    double num1, num2, ave;
    printf("Introduce two real number please: ");
    scanf("%1f %1f", &num1);
    ave = average(num1, num2);
    printf("The average value of %.4lf \n", ave);
    return 0;
}
