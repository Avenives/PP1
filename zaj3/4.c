#include <stdio.h>

int main()
{
    char A[4][20];
    for(int i=0;i<4;++i)
    {
        scanf("%19s",A[i]);
    }

    for(int i=0;i<4;++i)
    {
        printf(A[i]);
        printf(", ");
    }
}
