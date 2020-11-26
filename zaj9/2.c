#include <stdio.h>
#include <stdlib.h>

int main()
{
    char wpliku[1000];
    int n;
    printf("ile linii w pierwszym pliku\n");
    scanf("%d", &n);

    FILE *fp;
    fp = fopen("plikdopodzialu.txt", "r+");
    FILE *out1;
    out1 = fopen("output1.txt", "w+");
    FILE *out2;
    out2 = fopen("output2.txt", "w+");

    if(fp)
    {
        printf("plik otwarty\n");
        while(fgets(wpliku, 999, fp))
        {
            if(n>0)
            {
                fprintf(out1, "%s", wpliku);
                --n;
            }
            else
            {
                fprintf(out2, "%s", wpliku);
            }
        }
        fclose(fp);
    }
}
