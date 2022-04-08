#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,secim, secim2, para=1000, miktar, eski_bakiye, j;

    while(1){
        int cikis1 = 0;
        printf("1- Bakiye goruntule\n2- Para yatir\n3- Para cek\n4- Fatura Ode\n5- Cikis\n\nSeciminiz: ");
        scanf("%d",&secim);

        switch(secim)
        {
            case 1:
                printf("bakiyeniz: %d TL'dir\n\n", para);
            break;

            case 2:
                system("CLS");
                printf("Miktar giriniz: ");
                scanf("%d",&miktar);
                eski_bakiye = para;
                para= para + miktar;
                system("CLS");
                printf("\n\n---------------------------------\n\n");
                printf("Eski bakiyeniz = %d\n", eski_bakiye);
                printf("Yatirdiðiniz tutar = %d\n", miktar);
                printf("Guncel bakiyeniz = %d", para);
                printf("\n\n---------------------------------\n\n");
                break;

            case 3:
                system("CLS");
                printf("cekmek istediginiz tutar: ");
                scanf("%d",&miktar);
                eski_bakiye = para;
                para = para - miktar;
                printf("\n\n---------------------------------\n\n");
                printf("Eski bakiyeniz = %d\n", eski_bakiye);
                printf("cektiginiz tutar = %d\n", miktar);
                printf("Guncel bakiyeniz = %d", para);
                printf("\n\n---------------------------------\n\n");
                break;

            case 4:
                system("CLS");
                while(1)
                {
                int cikis2 = 0;
                printf(" 1 - Internet Faturasi\n 2 - Elektrik Faturasi\n 3-Su Faturasi\n 4- Geri Don\n");
                printf("Odemek istediginiz fatura: ");
                scanf("%d",&secim2);
                   switch(secim2) {
                    case 1: para = para - 200;
                        printf("Faturaniz odendi \nGuncel bakiyeniz %d :\n\n",para);
                        break;
                    case 2: para = para-300;
                        printf("Faturaniz odendi \nGuncel bakiyeniz %d :\n\n",para);
                        break;
                    case 3: para= para-250;
                        printf("Faturaniz odendi \nGuncel bakiyeniz %d :\n\n",para);
                    break;
                    case 4: cikis2 = 1;
                    system("CLS");
                    break;
                    default : printf("yanlis giris yaptiniz\n");
                    break;
                    }

                    if(cikis2 == 1){
                        break;
                    }
                }
                break;

            case 5:
                cikis1 = 1;
                system("CLS");
                printf("İyi gunler dileriz. \n\n");
                break;

            default :
               system("CLS");
               printf("\n\n---------------------------------\n\n");
               printf("\n\n Yanlis secim yaptiniz!!\n\n");
               printf("\n\n---------------------------------\n\n");
               break;
        }
        if(cikis1 == 1){
            break;
        }

    }

    system("pause");
    return 0;
}
