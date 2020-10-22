#include <stdio.h>

int main()
{
    int A[10]={1, 2, 3, 4, 5, 6, 7, 8, 9 ,10};

    int ok=1;
    for(int i=1;i<10;++i)
    {
        if(A[i-1]>A[i])
        {
            ok=0;
            break;
        }
    }

    if(ok)
        printf("tablica posortowana");
    else
        printf("tablica nie posortowana");
}
