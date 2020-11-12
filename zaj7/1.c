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


int main()
{
    int n, m;
    scanf("%d%d", &n,&m);

    int **tab=tablica(n,m);

    zwolnij(tab, n);
}
