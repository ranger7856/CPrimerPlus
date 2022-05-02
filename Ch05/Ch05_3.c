#include <stdio.h>
#define DAYS 7

int main(void)
{
    int days;
    printf("请输入天数: ");
    while(scanf("%d", &days) != 1)
    {
        printf("输入错误, 请重新输入: ");
        while(getchar()!='\n')
            continue;
    }
    while(days > 0)
    {
        printf("%d days are %d weeks, %d days.\n", days, days / DAYS, days % DAYS);
        printf("请输入天数 (小于等于0退出): ");
        while(scanf("%d", &days) != 1)
        {
            printf("输入错误, 请重新输入: ");
            while (getchar()!='\n')
                continue;
        }
    }
    return 0;
}