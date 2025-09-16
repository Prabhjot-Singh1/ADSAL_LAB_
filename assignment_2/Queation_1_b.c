#include<stdio.h>


int sum(int arr[],int s)
{
    if(s==0)
    {
        return 0;
    }
    else if(s==1)
    {
        return arr[0];
    }

    return arr[s-1]+sum(arr,s-1);
}

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
    
    int total=sum(arr,s); 

    printf("Sum of the sales is %d",total);
    


}