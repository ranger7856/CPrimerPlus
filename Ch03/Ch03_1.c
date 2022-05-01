#include <stdio.h>
#include <limits.h>

int main(void)
{
    int i_max = INT_MAX;
    int i_min = INT_MIN;
    int ui_max = UINT_MAX;
    float d_small = 3.123456E-38f;
    float d_big = 3.4E38f;
    float dd_small = d_small * 1e-5f;
    float dd_big = d_big * 1e2f;
    printf("i_max: %d.\n", i_max);
    printf("i_min: %d.\n", i_min);
    printf("ui_max: %u.\n", ui_max);
    printf("i_max + 1 = %d.\n", i_max + 1);
    printf("i_min - 1 = %d.\n", i_max - 1);
    printf("ui_max + 1= %u.\n", ui_max + 1);
    printf("0 - 1 = %u.\n", 0 - 1);
    printf("\n");
    printf("d_small : %e.\n", d_small);
    printf("d_big: %e.\n", d_big);
    printf("d_small * 1e-5 = %e.\n", dd_small);
    printf("d_big * 1e2 = %e.\n", dd_big);
    return 0;
}
