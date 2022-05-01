#include <stdio.h>

int main(void)
{
    float cup;
    printf("请输入杯数: ");
    scanf("%f", &cup);
    printf("品脱: %.2f, 盎司: %.2f, 汤勺: %.2f, 茶勺: %.2f.\n",
        cup/2.0f, cup*8.0f, cup*16.0f, cup*16.0f*3.0f);
    return 0;
}
