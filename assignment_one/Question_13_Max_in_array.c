#include<stdio.h>
#include<limits.h>

int main()
{

    int n;
    printf("Enter the size of the array ");
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++)
    {
        printf("Enter the %d element of array ",i);
        scanf("%d",&arr[i]);
    }


    int max=INT_MIN;
    for(int i=0;i<n;i++)
    {
        max=(arr[i]>max)?arr[i]:max;
    }

    printf("The largest element in the array is %d",max);

    return 0;
}