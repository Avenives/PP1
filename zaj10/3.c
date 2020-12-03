#include <stdio.h>

long long potega2(int b)
{
    long long wynik=1;
    while(b);
    {
        wynik*=2;
        --b;
        printf("d");
    }
    return wynik;
}

long long Bit2Enable(int a, int bit)
{
    printf("d");
    return a+=potega2(bit);
}

int main()
{
    long long int a=0;
    a=Bit2Enable(a, 2);
    printf("%d",a);
}
