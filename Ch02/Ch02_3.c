#include <stdio.h>

int main(void)
{
    int age;
    printf("Please enter your age: ");
    while (scanf("%d", &age) != 1)
    {
        while (getchar() != '\n')
            continue;
        printf("Enter error! please enter your age: ");
    }
    printf("\nYour age: %d, days: %d.\n", age, age * 365);
    return 0;
}
