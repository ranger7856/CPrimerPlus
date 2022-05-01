#include <stdio.h>

int main(void)
{
    double water_mass = 3.0e-23;
    double water_quart = 950.0;
    double result;
    printf("Please quart number of water: ");
    scanf("%lf", &result);
    printf("water molecules number: %g.\n", (result*water_quart)/water_mass);
    return 0;
}
