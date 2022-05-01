#include <stdio.h>

int main(void)
{
    int ch;
    printf("Please Enter ASCII: ");
    while (scanf("%d", &ch) != 1)
    {  
        while (getchar() != '\n')
            continue;
        printf("Enter error, Please retry: ");
    }
    printf("\n%c.\n", ch);    
    return 0;
}
