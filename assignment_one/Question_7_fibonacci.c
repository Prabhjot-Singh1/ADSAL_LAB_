#include<stdio.h>

int main()
{
    int n=0;
    scanf("");
    printf("Enter the term of the fibonacci series ");
    scanf("%d",&n);

    int a=0;
    int b=1;

    if(n>=1)
    {
        printf("%d ",a);
    }
    if(n>=2)
    {
        printf("%d",b);
    }
    int c;

    for(int i=3;i<=n;i++)
    {
        c=a+b;
        printf(" %d",c);

        a=b;
        b=c;

    }


    return 0;
}