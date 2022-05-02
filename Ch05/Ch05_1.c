#include <stdio.h>

#define MINUTE 60

int getMinute()
{
    int minute;
    while (scanf("%d", &minute) != 1 )
    {
        while(getchar() != '\n')
            continue;
        printf("输入错误，请输入数字.\n");
    }
    return minute;
}

int main(void)
{
    int minute;
    printf("请输入一个分钟数, (小于等于0退出).\n: ");
    minute = getMinute();
    while(minute >0)
    {
        printf("小时: %d, 分钟: %d.\n", minute / MINUTE, minute% MINUTE);
        printf("请输入一个分钟数, (小于等于0退出).\n");
        minute = getMinute();
    }
    return 0;
}