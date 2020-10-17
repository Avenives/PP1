#include <stdio.h>

int main()
{
    char a[20]={'0'};
    scanf("%s",&a);

    int i=0;
    while(a[i]!='1'&&i<20)
    i++;


    i=20-i;
    i/=2;
    printf("____________________\n");
    printf("|");for(int b=0;b<i;b++) printf(" "); printf("%s",a);printf("|");

    for(int b=0;b<i;b++) printf(" ");
    printf("\n____________________");
}
