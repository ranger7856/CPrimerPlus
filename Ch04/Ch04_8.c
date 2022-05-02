#include <stdio.h>
#define TRANS ((3.785*100)/1.609) 

int main(void)
{
    double gollon;
    double miles;
    printf("please enter travel distance (miles): ");
    scanf("%lf", &miles);
    printf("please enter gasoline consumption (gollon): ");
    scanf("%lf", &gollon);
    double m_g = miles / gollon; 
    printf("miles per gollon: %.1f\n", m_g);
    printf("Litre per 100 kilometre: %.1f\n", TRANS / m_g);
    return 0;
}
