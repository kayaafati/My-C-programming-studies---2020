#include <stdio.h>
#include <stdlib.h>

int main()
{
    int galibiyet=0, beraberlik=0, yenilgi=0;
    int devam_kontrolu= 1;
    int atilan_gol_sayisi=0, yenilen_gol_sayisi=0;

    while(devam_kontrolu == 1)
    {
        printf("takimimizin attigi gol sayisi: ");
        scanf("%d",&atilan_gol_sayisi);
        printf("\n");

        printf("takimimizin yedigi gol sayisi: ");
        scanf("%d",&yenilen_gol_sayisi);
        printf("\n");

        if(atilan_gol_sayisi > yenilen_gol_sayisi)
        {
            galibiyet++;
        }
        else if(yenilen_gol_sayisi > atilan_gol_sayisi)
        {
            yenilgi++;
        }
        else if(atilan_gol_sayisi == yenilen_gol_sayisi)
        {
            beraberlik++;
        }
        else
        {
            printf("beklenmedik bir sonuc alindi ");
        }

        printf("devam etmek istiyor musunuz? Evet icin 1'i Hayir icin herhangi bir sayiyi tuslayiniz : ");
        scanf("%d",&devam_kontrolu);
        printf("\n");
    }

    printf("toplam puaniniz: %d\n",(galibiyet*3)+beraberlik);
    printf("galibiyet : %d\n",galibiyet);
    printf("beraberlik : %d\n",beraberlik);
    printf("yenilgi : %d\n",yenilgi);


    return 0;
}
