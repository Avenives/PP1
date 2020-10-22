#include <stdio.h>

int main()
{
    char A[100];
    scanf("%99s",&A);

    int licznik=0;
    for(int i=0;A[i];++i)
        licznik++;

    printf("%d",licznik);
}
