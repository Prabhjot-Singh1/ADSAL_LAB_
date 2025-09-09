#include <stdio.h>

int main()
{
    int f;
    printf("Enter a number to calculate factorial ");
    scanf("%d",&f);

    if(f<0)
    {
        printf("Please enter a valid integer");
        return 0;
    }
    int fact=1;
    for(int i=1;i<=f;i++)
    {
        fact=fact*i;

    }

    printf("Factorial of the number is %d",fact);


    return(0);
}