#include <stdio.h>

int main(void)
{
    float download;
    float filesize;
    printf("please enter download speed (Mb/s): ");
    scanf("%f",&download);
    printf("please enter file size (MB):");
    scanf("%f", &filesize);
    printf("At %.2f megabits per second, ", download);
    printf("a file of %.2f megabytes.\n", filesize);
    printf("downloads in %.2f seconds.\n", (filesize * 8)/download);
    return 0;
}
