#include <stdio.h>
#define PRICE1 1.2 
#define PRICE2 1.0
#define PRICE3 0.9

int main()
{
    float cost, tax;
    printf("\n Current price: ");
    scanf("%f", &cost);
    if(cost < 1000.0)
       tax = PRICE1;
    if(cost >= 1000.0 && cost <= 1850.0)
       tax = PRICE2;
    if(cost > 1850.0)
       tax = PRICE3;

    printf("\nTax that correspond at %.1f kwxh is %f\n",
             cost, tax);
    return 0;
}
