#include <stdio.h>

void main() 
{
    void f(int i), g(void);
    extern int n;           /* Declaration of n not definition */
    f(8);
    n++;
    g();
    puts("End of program.");
}
