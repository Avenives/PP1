#include <stdio.h>
#include <stdlib.h>

int main()
{
    char wpliku[1000];

    FILE *in;
    in = fopen("wejscie.txt", "r+");
    FILE *out;
    out = fopen("wyjscie.txt", "w+");

    if(in)
    {
        printf("plik otwarty\n");
        while(fgets(wpliku, 999, in))
        {
            fprintf(out, "%s", wpliku);
        }
        fclose(in);
        close(out);
    }
}
