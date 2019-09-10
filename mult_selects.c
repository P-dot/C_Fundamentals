#include <stdio.h>

void main(){
    float number;
    printf("Introduce one positive or negative number: \n");
    scanf("%f", &number);
    /* Compare the number with zero */
    if (number > 0)
    {
        printf("%.2f %s", number, "is bigger than zero\n");
	puts("Prove newly introducing a negative number");
    }
    else if (number < 0)
    {
        printf("%.2f %s", number, "is less than zero\n");
	puts("prove newly introducing a negative number");
    }
    else 
    {
        printf("%.2f %s", number, "is equal to zero\n");
	puts("¿Do you want to introduce other numbe? ");
    }
}
	
