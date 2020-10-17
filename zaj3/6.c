#include <stdio.h>

int main()
{
    char A[100];
    int licznik=0;
    scanf("%99s",A);

    poczatek:
    if(A[licznik]!='\0')
    {
        licznik++;
        goto poczatek;
    }

    printf("%i",licznik);
}
