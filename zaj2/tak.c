#include <stdio.h>

int main()
{
    static int a=3;
    a-=1;
    printf("%d ", a);
    printf("%d", a-1);
}
