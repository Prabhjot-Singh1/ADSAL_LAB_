#include<stdio.h>


int factorial_calculate(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }

    return n*factorial_calculate(n-1);
}


int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the number to check for factorial ");
    scanf("%d",&n);
    int fact=factorial_calculate(n);

    printf("the factorial of the number is %d",fact);

    return 0;
}
