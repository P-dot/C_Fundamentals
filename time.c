#include <stdio.h>
#include <time.h>
#include <stdlib.h>
char *dias[] = {" ", "Lunes", "Martes", "Miercoles", "Jueves", "Viernes",
                   "Sabado", "Domingo"};

int main(void)
{
    struct tm date;
    int year, month, day;

    /*Entry: year, month and day */
    printf("Year: ");
    scanf("%d", &year);
    printf("Month: ");
    scanf("%d", &month);
    printf("Day: ");
    scanf("%d", &day);

    /*Assign date to the date structure, in stablished format */
    date.tm_year = year - 1900;
    date.tm_mon = month - 1;
    date.tm_mday = day;
    date.tm_hour = 0;
    date.tm_min = 0;
    date.tm_sec = 1;
    date.tm_isdst = -1;

    /* mktime finds the day of the week and day of the year. Returns -1 if error    */
    if(mktime(&date) == -1)
    {
       puts(" Date error.");
       exit(-1);
    }

    /*Function consider Sunday as 0 */
    if(date.tm_wday == 0)
       date.tm_wday = 7;

    printf("\nDay of the week: %d; day of the year: %d", date.tm_wday, date.tm_yday+1);

    /* Writes the day of the week */
    printf("\nIs the day of the week, %s\n", days[date.tm_wday]);
    return 0;
}
