#include <stdio.h>

int f(int A[],int n)
{
    int result=0;
    for(int i=0;i<n;++i)
    {
        result+=A[i];
    }
    return result;

}

int main()
{
    int A[3]={4,6,8};
    printf("%i",f(A, 3));
}
