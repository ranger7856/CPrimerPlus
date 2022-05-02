#include <stdio.h>
#define CM_FEET (5.0/182.0)
#define CM_INCHES (11.7/182.0)

double getHeight();

int main(void)
{
    double height;
    printf("请输入身高 (单位cm): ");
    height = getHeight();
    while(height > 0)
    {
        printf("%.2f cm = %.2f feet, %.2f inches.\n", 
            height, 
            height * CM_FEET, 
            height * CM_INCHES);
        printf("请输入身高 (<=0 退出): ");
        height = getHeight();
    }
    printf("Bye.\n");
}
double getHeight()
{
    double height;
    while(scanf("%lf", &height) != 1)
    {
        printf("输入错误, 请重新输入: ");
        while(getchar() != '\n')
            continue;
    }
    return height;
}