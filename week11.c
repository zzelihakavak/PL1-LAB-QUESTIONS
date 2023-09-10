#include <stdio.h>
#include <stdlib.h>

// lab11 1.soru
int main()
{
    int n, pn;
    for (n = 0; n < 9; n++)
    {
        pn = n * ((3 * n) - 1) / 2;
        printf("%d \n", pn);
    }
}

// lab 11 2.soru
int main()
{
    int num1, num2, i, j, n, sum;

    printf("Satir sayisini girin: ");
    scanf("%d", &num1);

    printf("Sutun sayisini girin: ");
    scanf("%d", &num2);

    int satir[num1];
    int sutun[num2];

    for (i = 0; i < num1; i++)
    {
        printf("%d. satirdaki diziyi girin: ", i + 1);
        scanf("%d", &satir[i]);
    }

    for (j = 0; j < num2; j++)
    {
        printf("%d. sutundaki diziyi girin: ", j + 1);
        scanf("%d", &sutun[j]);
    }
    for (i = 0; i < num1; i++)
    {
        for (j = 0; j < num2; j++)
        {
            sum += satir[i] * sutun[j];
        }
    }

    printf("Toplam: %d\n", sum);

    return 0;
}

// lab11 3.soru
int main()
{
    int ogrenci[10][10];
    int i, j, aveboy, avekilo;

    for (i = 0; i < 10; i++)
    {
        printf("%d. ogrencinin boyunu girin:", i + 1);
        scanf("%d", &ogrenci[i][0]);

        printf("%d. ogrencinin kilosunu girin:", i + 1);
        scanf("%d", &ogrenci[i][1]);
        aveboy += ogrenci[i][0];
        avekilo += ogrenci[0][1];
    }

    aveboy /= 10;
    avekilo /= 10;

    printf("ogrencilerin boy ortalaması:%d\n", aveboy);
    printf("ogrencilerin kilo ortalaması:%d", avekilo);
}


