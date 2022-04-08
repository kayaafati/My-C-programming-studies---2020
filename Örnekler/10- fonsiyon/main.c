#include <stdio.h>
#include <stdlib.h>

    void tek_cift(int s1)
    {
        if(s1%2 ==0)
        {
            printf("sayi cifttir");
        }
        else
        {
            printf("sayi tektir");
        }
    }

    int fak(int s2)
    {
        int faktoriyel=1, i;

        for(i=1;i<=s2;i++)
        {
            faktoriyel=faktoriyel*i;
        }
    return faktoriyel;
    }

    float pi_sayi_carpimi(int s3)
    {
        return (s3*3.14);
    }

int main()
{
    int secim=0,sayi;
    printf("bir sayi giriniz: ");
    scanf("%d",&sayi);
    printf("\n");

    printf("1. ciftlik teklik bulma\n2. faktoriyel bulma\n3. sayinizin pi sayisiyla carpimini bulma islemi\n");
    scanf("%d",&secim);
    printf("\n");

    switch(secim)
    {
    case 1:
        tek_cift(sayi);
        break;
    case 2:
        printf("%d",fak(sayi));
        break;
    case 3:
        printf("%f",pi_sayi_carpimi(sayi));
        break;
    default:
        printf("gecersiz islem yaptiniz ");
        break;

    }


    return 0;
}
