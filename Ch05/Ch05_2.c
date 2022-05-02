#include<stdio.h>
int main(void)
{
    int num;
    int i;
    printf("请输入一个整数: ");
    while(scanf("%d", &num) != 1)
    {
        while(getchar()!='\n')
            continue;
        printf("输入错误, 请重新输入: ");
    }
    for(i = num; i< num + 11; i++)
    {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}