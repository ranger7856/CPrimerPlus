#include <stdio.h>
#include <string.h>
#define SLEN 41
int main(void)
{
    char name[SLEN];
    printf("Please your name:");
    scanf("%s", &name);
    int len = strlen(name);
    printf("your name is \"%-18s\".\n", name);
    printf("your name is \"%18s\".\n", name);
    printf("your name is %*s.\n", len+3, name);
    return 0;
}
