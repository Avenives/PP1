#include <stdio.h>

int main()
{
    float wplata, wyplata;
    int mc;

    scanf("%f%f%i",&wplata,&wyplata,&mc);

    float roznica=wyplata-wplata;
    printf("zysk calkowity: %f\%\nzysk miesieczny: %f\%",roznica/wplata*100, roznica/wplata*100/mc);
}
