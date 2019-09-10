#include <stdio.h>

int main()
{
    char note;
    printf("Introduce a rate (A-E) and press Intro: ");
    scanf("%c", &note);

    switch (note)
    {
        case 'A':    puts("Excelent. Exam passed");
		     break;
        case 'B':    puts("Remarkable. Sufficiency");
		     break;
	case 'C':    puts("Approved");
		     break;
	case 'D':    puts("Suspended");
		     break;
        default:
		     puts ("Isn't possilble this note");
    }
    puts("End of the program");
    return 0;
}
