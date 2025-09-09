#include <stdio.h>

int main()
{
    int token_number;
    printf("Please enter the token number ");
    scanf("%d",&token_number);
    if(token_number<0)
    {
        printf("Please enter a valid token number ");
        return 0;
    }

    if(token_number%2==0)
    {
        printf("The token number is even");
    }
    else{
        printf("The token number is odd");
    }

    
    return(0);
}