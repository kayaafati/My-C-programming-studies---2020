#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi;
    int i,j;

    printf("þeklinizin boyutunu giriniz: ");
    scanf("%d",&sayi);
    printf("\n");

    for(i=0;i<sayi;i++)
    {
        for(j=0;j<sayi;j++)
        {
            printf(" * ");
        }
        printf("\n");
    }

    return 0;
}
