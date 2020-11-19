#include <stdio.h>

int koniec(int tab[3][3])
{
    if(tab[0][0]==tab[0][1]&&tab[0][0]==tab[0][2]&&tab[0][0]!=0) return 1;
    if(tab[1][0]==tab[1][1]&&tab[1][0]==tab[1][2]&&tab[1][0]!=0) return 1;
    if(tab[2][0]==tab[2][1]&&tab[2][0]==tab[2][2]&&tab[2][0]!=0) return 1;
    if(tab[0][0]==tab[1][0]&&tab[0][0]==tab[2][0]&&tab[0][0]!=0) return 1;
    if(tab[0][1]==tab[1][1]&&tab[0][1]==tab[2][1]&&tab[0][1]!=0) return 1;
    if(tab[0][2]==tab[1][2]&&tab[0][2]==tab[2][2]&&tab[0][2]!=0) return 1;
    if(tab[0][0]==tab[1][1]&&tab[0][0]==tab[2][2]&&tab[0][0]!=0) return 1;
    if(tab[0][2]==tab[1][1]&&tab[0][2]==tab[2][0]&&tab[0][2]!=0) return 1;

    return 0;
}

int main()
{
    int tab[3][3];
    for(int i=0;i<3;++i)
        for(int j=0;j<3;j++)
        tab[i][j]=0;

    int a,b;
    int ruchy=0;
    while(!koniec(tab))
    {
        if(ruchy%2==0){
            printf("Podaj X: [a] [b] ");
            scanf("%i%i", &a, &b);
            tab[a][b]=1;
        }
        else{
            printf("Podaj O: [a] [b] ");
            scanf("%i%i", &a, &b);
            tab[a][b]=2;
        }
        ++ruchy;
    }

    printf("\nkoniec gry!\n");
    for(int i=0;i<3;++i)
    {
        for(int j=0;j<3;j++)
            printf("%i", tab[i][j]);
        printf("\n");
    }
}
