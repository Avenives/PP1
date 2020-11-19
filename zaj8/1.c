#include <stdio.h>

int accumulate(int *wsk1, int *wsk2)
{
    int result=0;
    while(wsk1!=wsk2)
    {
        result+=*wsk1;
        ++wsk1;
    }

    return result;
}

int main()
{
    int tab[]={1,2,6,7,12};
    int *wsk1=&tab;
    int *wsk2=&tab[5];

    int result = accumulate(wsk1,wsk2);
    printf("%i",result);
}
