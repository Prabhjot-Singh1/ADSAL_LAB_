#include<stdio.h>
#include<stdlib.h>

int main()
{
    int count=0;

    int n;
    printf("Please enter a number to find sum of digits ");
    scanf("%d",&n);
    n=abs(n);
    int sum=0;


    while(n>0)
    {
        sum+=n%10;
        n=n/10;
    }

    printf(" Sum of the digits is  %d",sum);
}