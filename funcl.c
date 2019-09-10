#include <stdio.h>

void func1(void)
{
    puts ("Seconde function");
    return;    
}

void func2(void) 
{
    puts("Third function");
    return;
}

int main()
{
    puts("First function called main()");
    func1();
    func2();
    puts ("main is ended");

    return 0;
}
