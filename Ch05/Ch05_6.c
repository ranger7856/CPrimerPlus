#include <stdio.h>

int main(void)
{
    int count, sum, num;
    printf("请输入一个数字: ");
    while(scanf("%d", &num) != 1)
    {
        printf("输入错误, 请重新输入: ");
        while(getchar() != '\n')
            continue;
    }
    count = 0;
    sum = 0;
    while (count++ < num)
    {
        sum += count * count;
    }
    printf("sum = %d\n", sum);
    return 0;
}