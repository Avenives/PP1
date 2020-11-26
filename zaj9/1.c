#include <stdio.h>
#include <stdlib.h>

int porownanie(char A[], char B[], int n)
{
    int result=1;
    {
        for(int i=0;i<n;i++)
            if(A[i]!=B[i])
                {
                    result=0;
                    break;
                }
    }
    return result;
}

int main()
{
    char slowo[9]="zakazane";
    char wpliku[100];
    FILE *fp;

    fp = fopen("plik.txt", "r+");

    if(fp)
    {
        printf("plik otwarty\n");
        while(fgets(wpliku, 99, fp))
        {
            if(porownanie(slowo, wpliku, 8))
            {
                if(remove("plik.txt")==0)
                    printf("plik usuniety");
                break;
            }

            printf("%s", wpliku);
            printf("\n");
        }
    }

    fclose(fp);
}
