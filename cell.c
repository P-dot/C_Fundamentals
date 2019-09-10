#include <stdio.h>

void count(int cell);

int main()
{
    count(10);
    return 0;
}

void count(int cell)
{
    if (cell > 1)
       count(cell-1);
    printf("%d", cell);
}
