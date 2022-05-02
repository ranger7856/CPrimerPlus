#include <stdio.h>
double getDouble();
void printDouble_Cube(double d);

int main(void)
{
    double num;
    printf("请输入一个数字 (可以带小数): ");
    num = getDouble();
    printDouble_Cube(num);
    printf("bye.\n");
    return 0;
}

double getDouble()
{
    double num;
    while(scanf("%lf", &num) != 1)
    {
        printf("输入错误请重新输入: ");
        while (getchar() != '\n')
            continue;
    }
    return num;
}

void printDouble_Cube(double d)
{
    printf("%f 的立方值是 %f.\n", d, d*d*d);
}