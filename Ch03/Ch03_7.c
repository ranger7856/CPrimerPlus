#include <stdio.h>

int main(void)
{
    float cm_in = 2.54;
    float height;
    printf("Please enter your height (in): ");
    scanf("%f", &height);
    printf("your height is %g \"cm\"", height * cm_in);
    return 0;
}
