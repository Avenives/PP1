#include <stdio.h>

int main()
{
    int dni, godziny, minuty, sekundy;
    const int godziny_na_dzien=24;
    const int sekundy_w_minucie=60;
    const int minuty_w_godzinie=60;
    scanf("%d %d %d %d" ,&dni, &godziny, &minuty, &sekundy);

    godziny+=godziny_na_dzien*dni;
    minuty+=sekundy_w_minucie*godziny;
    sekundy+=sekundy_w_minucie*minuty;

    printf("%d",sekundy);

}
