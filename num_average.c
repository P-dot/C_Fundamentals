#include <stdio.h>
#include <string.h>

int main()
{   
    const int totNum = 6;
    int counterNum = 0;
    float addNum = 0;
    float average;

    printf("Introduce %d numbers\n", totNum);
    while(counterNum < totNum)
    {
        float number;
	scanf("%f", &number);
	addNum += number; 
	++counterNum;
    }
    average = addNum/counterNum;
    printf("Average: %.2f \n", average);

    return 0;
}
