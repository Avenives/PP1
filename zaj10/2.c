#include <stdio.h>
#include <stdbool.h>

bool getArrayBit(int array[], unsigned element, unsigned bit)
{
    int a=array[element];
    return a & (1<< bit);
}

int main()
{
    int A[]={5, 4, 2, 1, 15, 7, 2353};

    printf("%d", getArrayBit(A, 2, 1));
}
