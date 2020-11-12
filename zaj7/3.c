#include <stdio.h>

void nawias1(char tekst[6])
{
    printf("(%s)", tekst);
}

void nawias2(char tekst[6])
{
    printf("[%s]", tekst);
}

void nawias3(char tekst[6])
{
    printf("{%s}", tekst);
}

int main()
{
    char tekst[6]="tekst";
    void (*n)(char[6])=nawias1;
    n(tekst);
    printf("\n");

    n=nawias2;
    n(tekst);
    printf("\n");

    n=nawias3;
    n(tekst);
}
