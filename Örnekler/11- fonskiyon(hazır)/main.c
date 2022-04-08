#include <stdio.h>
#include <stdlib.h>
#include <math.h>

    double toplam_sure(int gelen_hiz, int gelen_derece)
    {
        double sonuc = 2 * ((gelen_hiz * sin((gelen_derece*M_PI)/180))/9.80);

        return sonuc;
    }

int main()
{
    int ilk_hiz=0, derece=0;
    printf("cismin atildigi ilk hiz: ");
    scanf("%d",&ilk_hiz);
    printf("\n");

    printf("cismin atildigi ilk derece: ");
    scanf("%d",&derece);
    printf("\n");

    printf("cismin yere ulastigi sure: %f",toplam_sure(ilk_hiz,derece));


    return 0;
}
