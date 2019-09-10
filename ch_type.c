#include <stdio.h>
#include <ctype.h>

int main()
{
    char initial;
    printf("What is the first initial character?: ");
    scanf("%c", &initial);

    while(!isalpha(initial))
    {
        puts("Not alphabetic character");
	printf("What is the next initial?: ");
	scanf("%c", &initial);
    }
    puts("Finished!");
    return 0;
}
