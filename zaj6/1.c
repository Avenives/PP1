#include <stdio.h>
#include <stdlib.h>

int *F(int n)
{
    int *tab=malloc(sizeof(int)*n);
    for(int i=0;i<n;++i)
    {
        tab[i]=0;
    }

    return tab;
}

int main()
{
    int n=0, *t;
    scanf("%d", n);

    t=F(n);
    free(t);
}
