#include<stdio.h>


void print_n(int n)
{
    if(n==0)
    {
        return;
    }
      
    print_n(n-1);
    printf(" %d ",n);
    
}

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter n for first n natural numbers ");
    scanf("%d",&n);

    print_n(n);
    return 0;
}
