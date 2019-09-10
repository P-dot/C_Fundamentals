#include <stdio.h>

int main(){
    
    long int n, m, fact;
    do {
       printf ("\nFactorial number of n, between 2 and 100:");
    
    }while ((n < 2) || (n > 100));

    for (m = n,fact=1; n>1; fact *= n--);

    printf("%ld! = %ld", m, fact);

    return 0;
}
