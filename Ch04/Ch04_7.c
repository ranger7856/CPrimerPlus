#include <stdio.h>
#include <float.h>
int main(void)
{
    double d = 1.0/3.0;
    float f = 1.0f/3.0f;
    printf("1.0/3.0 = %f, and 1.0f/3.0f = %f.\n", d, f);
    printf("1.0/3.0 = %.12f, and 1.0f/3.0f = %.12f.\n", d, f);
    printf("1.0/3.0 = %.20f, and 1.0f/3.0f = %.20f.\n", d, f);
    printf("double smallest bit: %d, and float smallest bit: %d.\n", DBL_DIG, FLT_DIG);
    return 0;   
}
