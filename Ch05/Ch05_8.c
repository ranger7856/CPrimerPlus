#include <stdio.h>

int getNumber();

int main(void)
{
    int last_num;
    int first_num;
    printf("This program computes moduli.\n");
    printf("Enter an integer to serve as the second operand: ");
    last_num = getNumber();
    printf("Now enter the first operand: ");
    first_num = getNumber();
    while (first_num > 0)
    {
        printf("%d %% %d is %d.\n", first_num, last_num, first_num % last_num);
        printf("Enter next number for first operand (<=0 to quit): ");
        first_num = getNumber();
    }
    printf("Done.\n");
    return 0;
}

int getNumber()
{
    int num;
    while(scanf("%d",&num) != 1)
    {
        printf("enter error, try: ");
        while(getchar() != '\n')
            continue;
    }
    while(getchar()!='\n')
        continue;
    return num;
}