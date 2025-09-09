#include <stdio.h>

int main(){

    int a,b,c;
    printf("Enter first number ");
    scanf("%d",&a);
    printf("Enter second number ");
    scanf("%d",&b);
    printf("Enter third number ");
    scanf("%d",&c);


    int l=(a>b)?((a>c)?a:c):(b>c)?b:c;

    printf("The largest number is %d",l);

    return (0);
}