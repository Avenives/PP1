#include <stdio.h>
#include <string.h>

void f(int n, int A[n], int B[n])
{
    for(int i=0;i<n;++i)
    B[i]=A[5-i-1];
}

int main()
{
    int A[5]={1,2,3,4,5};
    int B[5];

    f(5, A, B);

    for(int i=0;i<5;++i)
    {
        printf("%d, ", B[i]);
    }
}
