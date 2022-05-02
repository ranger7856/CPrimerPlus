#include <stdio.h>

int main(void)
{
    float num;
    printf("Please enter float point number: ");
    while(scanf("%f", &num) != 1)
    {
        while(getchar() != '\n')
            continue;
        printf("enter error, next try: ");
    }
    printf("The input is %.1f or %.1e.\n", num, num);
    printf("The input is %+.3f or %.3E.\n", num, num);
    return 0;
}
