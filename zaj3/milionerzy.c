#include <stdio.h>

int main()
{
    printf("Witaj w Milionerach!\nOto pierwsze pytanie za 1000zł:\nGlowna postać z bajki \"Król Lew\" to Lew... \nA) Simba      B)Trocki\n");
    char odpowiedz;
    scanf("%c",&odpowiedz);
    if(odpowiedz=='B'||odpowiedz=='b')
    {
        printf("Niestety, nie udało Ci się wygrać");
    }
    else
    {
        printf("Gratulacje, nastepne pytanie:\nIle to 2+2?\nA) 0     B) 4\n");
        scanf("%c",&odpowiedz);
        scanf("%c",&odpowiedz);
        if(odpowiedz=='a'||odpowiedz=='A')
        {
            printf("Niestety, nie udało Ci się wygrać");
        }
        else
        {
            printf("Gratulacje, nastepne pytanie:\nCzy jestes hardkorem?\nA) Tak     B) nie\n");
            scanf("%c",&odpowiedz);
            if(odpowiedz=='b'||odpowiedz=='B')
            printf("Niestety, nie udało Ci się wygrać");
            else
            printf("Wygrales teleturniej");
        }
    }
}
