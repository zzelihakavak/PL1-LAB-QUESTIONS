#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// lab 9 1.soru
int main()
{
    int a, b, c;
    printf("please enter first number: ");
    scanf("%d", &a);

    printf("please enter second number:");
    scanf("%d", &b);

    printf("please enter third number:");
    scanf("%d", &c);

    if (a > b && a > c)
    {
        printf("%d is the largest number", a);
    }
    else if (b > c && b > a)
    {
        printf("%d is the largest number", b);
    }
    else
    {
        printf("%d is the largest number", c);
    }
}

// lab 9 2.soru
int fakt(int sayi)
{
    int sonuc;
    if (sayi != 0)
    {
        sonuc = sayi * fakt(sayi - 1);
    }
    else
    {
        sonuc = 1;
    }
    return sonuc;
}
int main()
{
    int n;
    printf("please enter n number:");
    scanf("%d", &n);
    printf("faktoriyel=%d", fakt(n));
    return 0;
}

// lab 9 3.soru
int main()
{
    int n;
    for (n = 1000; n <= 2000; n++)
    {
        if (n % 2 == 0)
        {
            printf("%d ", n);
        }
        else
        {
            continue;
        }
    }
}

//lab 9 4.soru
int isPalindrome(int num) {
    int reversedNum = 0, originalNum = num;

    while (num > 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }

    return (reversedNum == originalNum);
}

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPalindrome(num)) {
        printf("%d is a palindrome.\n", num);
    } else {
        printf("%d is not a palindrome.\n", num);
    }

    return 0;
}

//lab 9 5.soru
double calculateSeriesSum(double x, int n) {
    double sum = 0.0;
    double term = 1.0;

    for (int i = 0; i < n; i++) {
        sum += term;
        term *= (x / (i + 1));
    }

    return sum;
}

int main() {
    double x;
    int n;

    printf("Enter the value of x: ");
    scanf("%lf", &x);

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    double result = calculateSeriesSum(x, n);

    printf("Sum of the series for x = %.2lf and n = %d is %.6lf\n", x, n, result);

    return 0;
}





