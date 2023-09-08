#include <stdio.h>
#include <stdlib.h>
//lab 8 2.soru
int main()
{

    float r, pi, area;
    pi = 3.14;

    printf("enter r number:");
    scanf("%f", &r);
    area = pi * r * r;

    printf("area is : %f", area);
}

// lab 8 3.soru
int main()
{
    int number;
    printf("enter your number:");
    scanf("%d", &number);

    if (number % 2 == 0)
    {
        printf("your number is even");
    }
    else
    {
        printf("your number is odd");
    }
}

// lab 8 4.soru
int main()
{
    float freezingpoint, temperature;

    printf("enter temperature:");
    scanf("%f", &temperature);

    printf("enter freezing point:");
    scanf("%f", &freezingpoint);

    if (temperature > freezingpoint)
    {
        printf("temperature is above the freezing point");
    }
    else if (temperature == freezingpoint)
    {
        printf("temperature is equal to the freezing point");
    }
    else
    {
        printf("temperature is below the freezing point");
    }
}

// lab 8 5.soru
int main()
{
    float c, f;
    printf("enter fahrenheit:");
    scanf("%f", &f);
    c = (f - 32) / 1.8;

    printf("%.2f fahrenheit is equal to %.2f celcius", f, c);
}

// lab 8 6.soru
int main()
{
    float f, cm;

    printf("enter your feet number:");
    scanf("%f", &f);
    cm = 0.03 * f;
    printf("%f feet is equal to %f cm", f, cm);
}

// lab 8 7.soru
int main()
{
    int a, b, c;
    printf("enter a:");
    scanf("%d", &a);
    printf("enter b:");
    scanf("%d", &b);
    printf("enter c:");
    scanf("%d", &c);

    if (a > b && a > c)
    {
        printf(" %d is the largest number", a);
    }
    else if (b > a && b > c)
    {
        printf("%d is the largest number", b);
    }
    else
    {
        printf("%d is the largest number", c);
    }
}
