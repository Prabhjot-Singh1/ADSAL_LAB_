#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the number to check for factorial ");
    scanf("%d",&n);
    int fact=1;
    for(int i=2;i<=n;i++)
    {
        fact=fact*i;

    }

    printf("the factorial of the number is %d",fact);

    return 0;
}
