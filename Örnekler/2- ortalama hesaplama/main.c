#include <stdio.h>
#include <stdlib.h>

int main()
{
    float vizenot, finalnot, devamnot;
    float ort=0;

    printf("Vize notunu giriniz: ");
    scanf("%f",&vizenot);

    printf("Final notunu giriniz: ");
    scanf("%f",&finalnot);

    printf("Devam notunu giriniz: ");
    scanf("%f",&devamnot);

    ort=((vizenot/100)*40) + ((finalnot/100)*50) + ((devamnot/100)*10);

    if(ort>=50)
    {
        printf("\n\n Gectiniz... \n\n");
    }
    else if (ort>=35 && ort <50)
    {
        printf("\n\n kosullu gectiniz... \n\n");
    }
    else
    {
        printf("\n\n kaldiniz... \n\n");
    }
    printf("Ortamanýz: %f", ort);

    return 0;
}
