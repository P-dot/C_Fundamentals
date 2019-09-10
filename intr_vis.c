#include <stdio.h>
#define MAX 10 

float sample[MAX];

// Visualize the array and then introduce data to it, separating them with the tab 

void main()
{
    int i;
    printf("\nIntroduce a list of %d positive elements. \n", MAX);
    for (i = 0; i < MAX; sample[i]>20?++i:i)
        scanf("%f", &sample[i]);
    printf("\nData readed from keyboard: ");
    for (i = 0; i <MAX; i++)
	printf("%f\t", sample[i]);
}
