#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


void flegmatyk(char A[20], char B[40])
{
    int j=0;
    for(int i=0;i<20;++i)
    {
        if(A[i]=='a'||A[i]=='A'||A[i]=='e'||A[i]=='E'||A[i]=='i'||A[i]=='I'||A[i]=='o'||A[i]=='O'||A[i]=='u'||A[i]=='U'||A[i]=='y'||A[i]=='Y')
        {
            B[i+j]=A[i];
            if(rand()%2)
            {
                ++j;
                B[i+j]=A[i];
            }
        }
        else
        B[i+j]=A[i];
    }
}

int main()
{
    srand(time(NULL));
    char A[20];
    char B[40];
    scanf("%19s", A);

    flegmatyk(A, B);

    printf("%s", B);
}
