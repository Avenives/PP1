#include <stdio.h>

int main()
{
    int i=30;
    int wynik=0;
    while(i<=100)
    {
        wynik+=i;
        ++i;
    }

    printf("%i", wynik);
}
