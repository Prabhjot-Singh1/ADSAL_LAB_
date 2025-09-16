#include<stdio.h>

int main()
{
    int s=0;
    printf("Enter the size of the list ");
    scanf("%d",&s);
    int arr[s];
    for(int i=0;i<s;i++)
    {
        printf("Enter the %d value ",i);
        scanf("%d",&arr[i]);
    }
    
    int sum=0;
    for(int i=0;i<s;i++)
    {
        sum+=arr[i];
    }

    printf("Sum of the sales is %d",sum);
    
    
}