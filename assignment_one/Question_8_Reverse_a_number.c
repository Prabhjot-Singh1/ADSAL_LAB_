#include<stdio.h>

int main()
{
    int n;
    printf("Please enter a number to reverse ");
    scanf("%d",&n);
    int r=0;
    int rem=0;


    while(n>0)
    {
        rem=n%10;
        r= 10*r+rem;
        n=n/10;
    }

    printf("The reverse of the number is %d",r);



    return 0;
}
