#include <stdio.h>

void Temperatures(double fahrenheit);

int main(void)
{
    double fahrenheit;
    printf("请输入一个华氏温度值: ");
    while(scanf("%lf", &fahrenheit) == 1)
    {
        while(getchar()!='\n')
            continue;
        Temperatures(fahrenheit);
        printf("请再次输入一个华氏温度值 (q 键退出): ");
    }
    printf("bye.\n");
    return 0;
}

void Temperatures(double fahrenheit)
{
    const double a = 5.0 / 9.0;
    const double b = 32.0;
    const double c = 273.16;
    printf("华氏温度: %.2f, 摄氏温度: %.2f, 开氏温度: %.2f.\n", 
        fahrenheit, 
        a * (fahrenheit - b), 
        a * (fahrenheit - b) + c);
}