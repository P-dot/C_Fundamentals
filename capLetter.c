#include <stdio.h>
#include <ctype.h>

int main()
{
    char ans;
    char ch;

    printf("Is a truth or a falsity (T/F)?: ");
    scanf("%ch", &ans);
    ans = toupper(ans);
    switch(ans)
    {
        case 'T':
            puts("Is a tautology");
	    break;
	case 'F':
	    puts("Is a contradiction");
	    break;
	default:
	    puts("Is a exclusive third");
	    break;
    }
    return 0;
}
