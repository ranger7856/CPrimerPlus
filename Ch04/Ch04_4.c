#include <stdio.h>

int main(void)
{
    float height;
    printf("Please enter your height (cm): ");
    while(scanf("%f", &height) != 1)
    {
        while(getchar()!='\n')
            continue;
        printf("enter error, next try: ");
    }
    printf("Dabney, you are %.2f m tall.\n", height/100.0);
    return 0;
}
