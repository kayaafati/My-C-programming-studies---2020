#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi, i, j;

    printf("seklinizin boyutunu giriniz: ");
    scanf("%d",&sayi);
    printf("\n");

    for(i=0;i<sayi;i++)
    {
        for(j=sayi-i/*j=sayi*/;j>0/*j>i*/;j--)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
