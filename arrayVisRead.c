#include <stdio.h>
/*Prototypes*/

void read(int a[][5]);
void visualize(const int a[][5]);

int main()
{
   int a[3][5];
   read(a);
   visualize(a);
   return 0;
}

void read(int a[][5])
{
   int i, j;
   puts("Introduce 15 integer numbers, 3 by raw");
   for(i = 0; i < 3; i++)
   {   	   
       printf("Raw %d: ", i);
       for(j = 0; j < 5; j++)
       scanf("&d", &a[i][j]);
   }
}

void visualize(const int a[][5])
{
   int i, j;
   for(j = 0; j < 5; j++)
       printf(" %d", a[i][j]);
       printf("\n");
}
