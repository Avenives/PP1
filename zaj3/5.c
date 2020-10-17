#include <stdio.h>

int main()
{
    const int A[2]={1,2};
    const int B[2]={3,5};
    const int C[2]={4,21};

    const int D[6]={A[0],A[1],B[0],B[1],C[0],C[1]};

    for(int i=0;i<6;++i)
    {
        printf("%i\n",D[i]);
    }
}
