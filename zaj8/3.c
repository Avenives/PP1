#include <stdio.h>

struct wynik
{
    char *nazwisko[30];
    int glosy;
};

void sort(struct wynik tab[3], int n)
{
    for(int i=0;i<n-1;++i)
    for(int j=0;j<n-i-1;++j)
    {
        if(tab[j].glosy<tab[j+1].glosy)
        {
            struct wynik temp=tab[j];
            tab[j]=tab[j+1];
            tab[j+1]=temp;
        }
    }
}

int main()
{

    struct wynik tab[3];

    *tab[0].nazwisko="Nowicki";
    tab[0].glosy=20;

    *tab[1].nazwisko="Kowalski";
    tab[1].glosy=15;

    *tab[2].nazwisko="Nowak";
    tab[2].glosy=30;

    sort(tab, 3);

}
