#include <stdio.h>
#include <stdlib.h>

// lab 10 1.soru
int main()
{
    float arr[8];
    int n;
    float sum = 0.0;
    float ave;

    for (n = 0; n < 8; n++)
    {
        printf("Enter number %d: ", n + 1);
        scanf("%f", &arr[n]);
        sum += arr[n];
    }

    ave = sum / 8;

    printf("Average is %.2f\n", ave);

    return 0;
}

//lab 10 2.soru
int main() {
    int arr[10];
    int n, x;

    for (n = 0; n < 10; n++) { 
        printf("Enter number %d: ", n + 1);
        scanf("%d", &arr[n]);
        x = arr[n] * arr[n];
        printf("%d nin karesi %d dir.\n", arr[n], x);
    }

    return 0;
}

//lab 10 3.soru
int main(){
    int n,a,b,c,d,e;
    printf("enter number:");
    scanf("%d",&n);
    if(n%100000>1){
        return;
    }
    else{
        a=n%10000;
        b=n%1000;
        c=n%100;
        d=n%10;
        e=n%1;
        printf(" %d %d %d %d %d",a,b,c,d,e);
    }
}

//lab 10 4.soru
int main(){
    int arr[10];
    int n;
    for (n = 0; n < 10; n++) { 
        printf("Enter number %d: ", n + 1);
        scanf("%d", &arr[n]);
    }
     printf("reverse array:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
}