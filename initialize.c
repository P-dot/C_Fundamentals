#include <stdio.h>

#define NUM 8

int main() 
{
    int nums[NUM];
    int i; 
    int total = 0;
    
    for (i = 0; i < NUM; i++)
    {
        printf("Please, introduce the number: ");
	scanf("%d",&nums[i]);
    }
   
    printf("\nList of numbers: ");
    
    for (i = 0; i < NUM; i++)
    {
        printf("%d",nums[i]);
	total += nums[i];
    }

    printf("\nThe addition of the numbers is %d", total);

    return 0;
}
