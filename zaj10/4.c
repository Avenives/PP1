#include <stdio.h>
#include <math.h>
#include <time.h>

struct TorbaCukierkow{
    int ile;
};

int main()
{
    srand(time(NULL));
    int uczniowie=rand()%26+10; //10-35
    int uczniowie2=uczniowie;

    struct TorbaCukierkow ZawartoscTorby;
    ZawartoscTorby.ile=((uczniowie/10)*10)+10;

    while(uczniowie--)
    {
        if(rand()%5)
        ZawartoscTorby.ile-=1;
        else
        ZawartoscTorby.ile-=2;

        if(ZawartoscTorby.ile<1)
        {
            break;
        }
    }

    printf("cukierki dostalo %d osob\ncukierkow nie dostalo %d osob", uczniowie2-uczniowie-1 , uczniowie+1);
}
