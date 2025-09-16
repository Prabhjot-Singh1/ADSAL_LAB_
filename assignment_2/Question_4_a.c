#include<stdio.h>

int main(int argc, char const *argv[])
{
    
    //check even or odd

    int n;
    printf("Enter a number to check for even or odd ");
    scanf("%d",&n);
    
    if(n%2==0)
    {
        printf("The number is even ");
    }
    else{
        printf("The number is odd ");
    }

    return 0;
}
