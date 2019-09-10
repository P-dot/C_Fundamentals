#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <curses.h>

int main(void)
{
    int i;

    clrscr(); /*Clean the screen*/
    randomize();
    for (i=1; i<=10; i++)
        printf("%d ", rand());
    return 0;
}
