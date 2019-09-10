#include <stdio.h>
int main()
{
    char option;
    do
    {
        puts("Hi");
	puts("Do you want another type of greeting");
        puts("Press s for yes and n for no");;
	printf("and press intro to continue: ");
	scanf("%c", &option);
    } while (option == 's' || option == 'S');
    puts("By");
    return 0;
}
