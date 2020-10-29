#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define N 7

void sort(int n,int A[n])
{
    for(int j=0;j<n;j++)
    for(int i=1;i<n-j;i++)
    {
        if(A[i-1]>A[i])
        {
            int temp=A[i];
            A[i]=A[i-1];
            A[i-1]=temp;
        }
    }
}

int f(int n, int A[n])
{
    if(n%2)
    {
        return A[(n/2)];
    }
    else
    {
        int result=0;
        result+=A[n/2];
        result+=A[(n/2)-1];
        result/=2;
        return result;
    }
}

int main()
{
    int A[N]={1,2,6,89,65,43,12};

    sort(N, A);
    int r=f(N, A);

    printf("%d",r);
}
