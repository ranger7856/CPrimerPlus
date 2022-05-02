#include <stdio.h>
#include <string.h>

#define SLEN 41
int main(void)
{
   int flen;
   int llen;
   char fname[SLEN];
   char lname[SLEN];
   printf("please enter your last name: ", lname);
   scanf("%s", lname);
   printf("please enter your first name: ", fname);
   scanf("%s", fname);
   flen = strlen(fname);
   llen = strlen(lname);
   printf("%s %s\n", lname, fname);
   printf("%*d %*d\n", llen, llen, flen, flen);
   printf("%s %s\n", lname, fname);
   printf("%-*d %-*d\n", llen, llen, flen, flen);
   return 0;
}
