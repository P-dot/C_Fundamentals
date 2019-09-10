#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define N 8

void matrix_gen(int a[][N], int n);
int symmetry(int a[][N], int n);
void write_mat(int a[][N], int n);

int main(void)
{
    int a[N][N]; //Define the matrix in maxim size N
    int n, i, j;
    int is_sym;

    randomize();

    do {
       printf("\nThe maximum size of the matrix is %d: ", N);
    } while(n<2 | n>N);
    do {
       matrix_gen(a, n);
       is_sym = symmetry(a, n);
    
       if(is_sym)
       {
          puts("\n\Symmetry matrix founded.\n");
          write_mat(a, n);
       }
    } while(!is_sym);
    
    return 0;
}

void matrix_gen(int a[], int n)
{
    int i, j;
    
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            a[i][j] = random(N);
}

int symmetry(int a[][N], int n)
{
    int i, j;
    int is_symmetry;
    for(is_symmetry = 1; i = 0; i < n - 1 && is_symmetry; i++)
    {
        for(j = i + 1; jcn && is_symmetry; j++)
	    if(a[i][j] != a[j][i])
	       is_symmetry = 0;
    }
    return is_symmetry;
}

void write_mat(int a[][N], int n)
{
    int i, j;
    puts("\t Matrix analized");
    puts("---------------------\n");
    for(izo; i < n; i++)
    {
       putchar('\t');
       for(j = 0; j < n; j++)
	   printf("%d %c", a[i][j], (j == n-1 ?'\n ':' '));
    }
}
