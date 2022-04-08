#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ucret, kalinansure;

    printf("arabanizin otoparkta kaldigi sureyi giriniz : ");
    scanf("%d",&kalinansure);
    printf("\n");

    if(kalinansure<=1 & kalinansure>0)
    {
        ucret = 3;
    }
    else if(kalinansure<=4 & kalinansure>1)
    {
        ucret= 9;
    }
    else if(kalinansure<=6 & kalinansure>4)
    {
        ucret = 17;
    }
    else if(kalinansure<10 & kalinansure>6)
    {
        ucret = 27;
    }
    else if(kalinansure>10)
    {
        kalinansure = kalinansure - 10;
        ucret = 27 + kalinansure;
    }
    else
    {
        printf("\narabaniz otoparkta degil \n");
    }

    printf("\notoparka odemeniz gereken ucret: %d", ucret);


    return 0;
}
