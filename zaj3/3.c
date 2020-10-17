#include <stdio.h>

int main()
{
    printf("podajesz mile [m], czy kilometry [k]?\n");
    char a;
    int wejscie;
    scanf("%c", &a);
    printf("podaj wartosc\n");
    scanf("%i", &wejscie);
    if(a=='m')
        printf("%i mil to %f mil", wejscie, 1.609*wejscie);
    else
        printf("%i km to %f mil", wejscie, 0.62*wejscie);
}
