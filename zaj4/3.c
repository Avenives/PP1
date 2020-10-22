#include <stdio.h>

int main()
{
    int n,m;
    scanf("%i %i", &n, &m);
    int tab[n][m];
    //printf("%i%i", m , n);

    for(int i=0;i<n;++i)
    {
        for(int j=0;j<m;++j)
        {
            scanf("%i", &tab[i][j]);
        }
    }

    printf("\n");
    for(int i=0;i<m;++i)
    {
        for(int j=0;j<n;++j)
            printf("%i ", tab[j][i]);
        printf("\n");
    }

    printf("\n");
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<m;++j)
            printf("%i ", tab[i][j]);
        printf("\n");
    }
}

