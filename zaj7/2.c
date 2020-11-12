#include <stdio.h>

void zwolnij(int **tab,int N)
{
    for(int i = 0; i < N; ++i)
        free(tab[i]);
    free(tab);
}

int **tablica(int N, int M)
{
    int **tab = (int **)malloc(N * sizeof(int *));
    for(int i = 0; i < N; ++i)
        tab[i] = (int *)malloc(M * sizeof(int));

    return tab;
}

void wypisz(int **tab,int n,int m)
{
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<m;++j)
        {
            printf("%d ", tab[i][j]);
        }
        printf("\n");
    }
}

void wpisz(int **tab,int n,int m)
{
   for(int i=0;i<n;++i)
        for(int j=0;j<m;++j)
        {
            scanf("%d", &tab[i][j]);
        }
}

void odejmij(int **tab1, int **tab2, int n, int m)
{
    for(int i=0;i<n;++i)
        for(int j=0;j<m;++j)
        {
            tab1[i][j]-=tab2[i][j];
        }

}

int main()
{
    int n, m;
    scanf("%d%d", &n,&m);

    int **tab1=tablica(n,m);
    int **tab2=tablica(n,m);

    wpisz(tab1,n,m);
    printf("\n");
    wypisz(tab1,n,m);
    printf("\n");

    wpisz(tab2,n,m);
    printf("\n");
    wypisz(tab2,n,m);
    printf("\n");

    odejmij(tab1,tab2, n, m);
    wypisz(tab1,n,m);

    zwolnij(tab1, n);
    zwolnij(tab2, n);


}
