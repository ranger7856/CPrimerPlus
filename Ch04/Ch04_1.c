#include <stdio.h>
#define LEN 40
int main(void)
{
    char fname[LEN];
    char lname[LEN];
    printf("Please enter your first name:");
    scanf("%s",fname);
    printf("enter your second name:");
    scanf("%s",lname);
    printf("Your last_name: %s, first_name: %s\n", lname, fname);
    return 0;
 }
