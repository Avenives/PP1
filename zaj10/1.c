#include <stdio.h>
#include <math.h>

struct wynik{
    int ile;
    double x1;
    double x2;
};

struct wynik rownanie(int a, int b, int c)
{
    int delta=(b*b-4*a*c);
    double pdelta=sqrt(b*b-4*a*c);

    struct wynik A;
    if (delta>0) A.ile=2;
    else if(delta==0) A.ile=1;
    else A.ile=0;

    if(delta>=0)
    {
        A.x1=(-a-pdelta)/(2*b);
        A.x2=(-a+pdelta)/(2*b);
    }
    return A;
}
int main()
{
    int a=2, b=4, c=1;
    a=sqrt(4);
    struct wynik A=rownanie(a, b, c);

    printf("%d\n%f\n%f", A.ile, A.x1, A.x2);
}
