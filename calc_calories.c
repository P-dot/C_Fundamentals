#include <stdio.h>

int main()
{
     int num_elements, count, calorsByFood, totCalories;
     
     printf("How many items have you item today? ");
     scanf("%d", &num_elements);

     totCalories = 0;
     count = 1;

     printf("Introduce the number of calories of each item ");
     printf("%d %s", num_elements,"Food taken:\n");

     while(count++<= num_elements)
     {
         scanf("%d", &calorsByFood);
	 totCalories += calorsByFood;
     }

     printf("The total calories consumed today are = ");
     printf("%d \n", totCalories);

     return 0;
}
