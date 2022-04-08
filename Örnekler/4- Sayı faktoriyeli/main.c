#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi, i,fak=1;

    printf("Lutfen faktoriyelini istediginiz sayiyi giriniz: ");
    scanf("%d",&sayi);
    printf("\n");

    for(i=1;i<=sayi;i++)
    {
        fak = fak*i;
    }
    printf("faktoriyel: %d",fak);

    return 0;
}
