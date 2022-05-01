#include <stdio.h>
#include <string.h>
#define SLEN 40
char * s_gets(char *, int);
int main(void)
{
    char name[SLEN];
    char address[SLEN];
    printf("Please enter your name: ");
    s_gets(name, SLEN);
    printf("Please enter your address: ");
    s_gets(address, SLEN);
    puts("");
    printf("your name is %s.\n", name);
    printf("your address is %s.\n", address);
    return 0;
}

char * s_gets(char * st, int n)
{
    char * ret_val;
    char * find;
    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        find = strchr(st, '\n');
        if (find != NULL)
        {
            *find = '\0';
        }
        else
        {   
            while(getchar() != '\n')
                continue;
        }
    }
    return ret_val;
}
