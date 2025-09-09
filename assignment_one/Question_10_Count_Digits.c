#include<stdio.h>
#include<stdlib.h>

int main()
{
    int count=0;

    int n;
    printf("Please enter a number to count digits ");
    scanf("%d",&n);
    n=abs(n);


    while(n>0)
    {
        n=n/10;
        count++;
    }

    printf("there are %d digits ",count);
}