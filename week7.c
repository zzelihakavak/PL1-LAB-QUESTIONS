#include <stdio.h>
#include <stdlib.h>

// lab 7 1.soru
int main()
{
    int a, b, sum;
    printf("enter a number:");
    scanf("%d", &a);

    printf("enter b number");
    scanf("%d", &b);

    sum = a + b;

    printf("sum is :%d", sum);
}

// lab 7 2.soru
int main()
{
    int a, b, temp;
    printf("enter a number:");
    scanf("%d", &a);

    printf("enter b number:");
    scanf("%d", &b);

    temp = a;
    a = b;
    b = temp;

    printf("a:%d", a);
    printf(" b:%d", b);
}

// lab7 3.soru
int main()
{
    int no, vize, final, gecme;
    printf("enter student no:");
    scanf("%d", &no);

    printf("enter midterm grade:");
    scanf("%d", &vize);

    printf("enter final grade");
    scanf("%d", &final);

    gecme = (0.4 * vize) + (0.6 * final);

    printf("result:%d no:%d", gecme, no);
}

// lab 7 4.soru
int main()
{
    int choice;
    float r, area, circumference, pi;
    pi = 3.14;
    printf("enter choice number:");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("enter r number:");
        scanf("%f", &r);

        circumference = 2 * pi * r;
        printf("circumference:%f", circumference);
    }
    else if (choice == 2)
    {
        printf("enter r number:");
        scanf("%f", &r);
        area = pi * r * r;
        printf("area:%f", area);
    }
    else
    {
        printf("error");
    }
}

// lab 7 5.soru
int main()
{
    int a, b, c, d, sum, money;
    printf("enter your money:");
    scanf("%d", &money);
    if (money % 10 != 0)
    {
        printf("error");
    }

    else if (money > 100)
    {
        a = money / 100;
        money = money % 100;
        b = (money % 100) / 50;
        money = money % 50;
        c = (money % 50) / 20;
        money = money % 20;
        d = (money % 20) / 10;
        money = money % 10;
        sum = a + b + c + d;
        printf(" sum : %d", sum);
    }

    else if (money < 100 && money > 50)
    {
        b = money / 50;
        money = money % 50;
        c = (money % 50) / 20;
        money = money % 20;
        d = (money % 20) / 10;
        money = money % 10;
        sum = b + c + d;
        printf(" sum : %d", sum);
    }
    else if (money < 50 && money > 20)
    {
        c = money / 20;
        money = money % 20;
        d = (money % 20) / 10;
        money = money % 10;
        sum = c + d;
    }

    else if (money < 20 && money > 10)
    {
        d = money / 10;
        money = money % 10;
        sum = d;
    }
}


