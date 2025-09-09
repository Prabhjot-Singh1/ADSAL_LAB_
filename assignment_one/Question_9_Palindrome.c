#include<stdio.h>

int main()
{
    int n;
    printf("Please enter a number to check for palindrome ");
    scanf("%d",&n);
    int temp=n;
    int r=0;
    int rem=0;


    while(n>0)
    {
        rem=n%10;
        r= 10*r+rem;
        n=n/10;
    }

   if(temp==r)
   {
    printf("The number is a palindrome ");
   }
   else{
    printf("Number is not a palindrome ");
   }



    return 0;
}
