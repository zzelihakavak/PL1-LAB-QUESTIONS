#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

// lab 13 1.soru

int kare(int x)
{
    return x * x;
}

int main()
{
    int kenar, sonuc;

    printf("Karenin bir kenarini giriniz: ");
    scanf("%d", &kenar);

    sonuc = kare(kenar);

    printf("Karenin alani: %d\n", sonuc);

    return 0;
}

// lab 13 2.soru
int ave(int x)
{
    return x / 5;
}

int main()
{
    int i, toplam = 0;

    for (i = 0; i < 5; i++)
    {
        printf("Bir sayi girin (%d/5): ", i + 1);
        int sayi;
        scanf("%d", &sayi);
        toplam += sayi;
    }

    int ortalama = ave(toplam);

    printf("Girilen 5 sayinin ortalamasi: %d\n", ortalama);

    return 0;
}

// lab 13 3.soru
int sayi(int x)
{
    return x % 2 == 0;
}
int main()
{
    int n;
    printf("enter number:");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("your number is even");
    }
    else
    {
        printf("your number is odd");
    }
}

// lab 13 4.soru
bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

bool isArmstrong(int n)
{
    int temp = n, cnt = 0, sum = 0;

    while (temp != 0)
    {
        temp /= 10;
        cnt++;
    }

    temp = n;
    while (temp != 0)
    {
        int remainder = temp % 10;
        sum += pow(remainder, cnt);
        temp /= 10;
    }

    return sum == n;
}

int main()
{
    int num;

    printf("Bir sayi girin: ");
    scanf("%d", &num);

    if (isPrime(num))
    {
        printf("%d bir asal sayidir.\n", num);
    }
    else
    {
        printf("%d bir asal sayi degildir.\n", num);
    }

    if (isArmstrong(num))
    {
        printf("%d bir Armstrong sayisidir.\n", num);
    }
    else
    {
        printf("%d bir Armstrong sayisi degildir.\n", num);
    }

    return 0;
}

//lab 13 5.soru
bool isWordCharacter(char c) {
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9');
}

int main() {
    char cumle[1000]; 
    int kelimeSayisi = 0; 
    bool kelimeIcerisinde = false; 

    printf("enter sentence: ");
    fgets(cumle, sizeof(cumle), stdin);

    
    for (int i = 0; cumle[i] != '\0'; i++) {
        if (isWordCharacter(cumle[i])) {
            if (!kelimeIcerisinde) {
                kelimeIcerisinde = true;
                kelimeSayisi++;
            }
        } else {
            kelimeIcerisinde = false;
        }
    }

    printf("number of word: %d\n", kelimeSayisi);

    return 0;
}

