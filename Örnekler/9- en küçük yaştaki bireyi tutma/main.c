#include <stdio.h>
#include <stdlib.h>

int main()
{
    int enkucuk=9999, sayi=0, yas, devam_kontrol=1;

    while(devam_kontrol==1)
    {
        printf("Yas giriniz: ");
        scanf("%d",&yas);
        printf("\n");

        if(yas<0)
            {
            printf(" hatali giris yaptiniz \n");
            }
        else
        {
            if(yas<enkucuk)
            {
                sayi = 0;
                enkucuk = yas;
                sayi++;
            }
            else if(enkucuk==yas)
            {
                sayi++;
            }
        }
        printf("devam etmek istiyor musunuz? (evet = 1) : ");
        scanf("%d",&devam_kontrol);
        printf("\n");
    }

    printf("en kucuk yas %d dir\n", enkucuk);
    printf("en kucuk yastan %d kadar giris yapildi \n",sayi);

    return 0;
}
