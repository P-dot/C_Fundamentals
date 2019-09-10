#include <stdio.h>

//Global constant  and variables 

#define MAX 10 
float sample[MAX];
void main(){
    
    int i;
    printf("\nIntroduce a list of %d positive elements.\n", MAX);
    for (i = 0; i < MAX; sample[i]>0?++i:i)
        scanf("%f",&sample[i]);
}
