#include <stdio.h>
#define Pi 3.141592

#define VOLCONE(radius, height) ((Pi*(radius*radius)*height)/3.0)

int main()
{
    float radius, height, volume;

    printf("\nIntroduce cone radius: ");
    scanf("%f", &radius);
    printf("Introduce cone height");
    scanf("%f", height);
    volume = VOLCONE(radius, height);
    printf("\nThe volume of the cone is: %.2f", volume);
    return 0;
}
