#include <stdio.h>
#include <stdlib.h>

int main()
{
    int kenar = 0, yukseklik=0, taban=0, yaricap=0,secim;
    float pi=3.14;

    printf("-- hangi geometrik sekli secmek istersiniz --\n");
    printf("1.kare\n2.ucgen\n3.daire\n\n");
    scanf("%d",&secim);
    printf("\n");

    switch(secim)
    {
    case 1:
        printf("karenin bir kenarini giriniz: ");
        scanf("%d",&kenar);
        printf("\n");
        printf("karenin alanı: %d",(kenar*kenar));
        break;

    case 2:
        printf("ucgenin tabanini giriniz: ");
        scanf("%d",&taban);
        printf("\n");
        printf("ucgenin yuksekligini giriniz: ");
        scanf("%d",&yukseklik);
        printf("\n");
        printf("ucgenin alani: %d",((taban*yukseklik)/2));
        break;

    case 3:
        printf("dairenin yaricapini giriniz: ");
        scanf("%d",&yaricap);
        printf("\n");
        printf("Dairenin alani: %d",(pi*yaricap*yaricap));
        break;

    default:
        printf("gecerli giris yapilmadi.\n");
    }


    return 0;
}
