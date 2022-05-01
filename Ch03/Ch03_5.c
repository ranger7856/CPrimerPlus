#include <stdio.h>

int main(void)
{
    int age;
    double year_second = 3.156e7;
    double age_second = age * year_second;    
    printf("Please enter your age: ");
    scanf("%d", &age);
    printf("you alive %e age_second.\n", age_second);
    printf("you alive %f age_second.\n", age_second);
    return 0;
}
