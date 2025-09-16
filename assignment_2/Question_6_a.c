    #include<stdio.h>

    int main()
    {
        int arr[7]={10,15,23,13,10,27,32};
        
        int t;
        printf("Enter the ID you want to search ");
        scanf("%d",&t);

        for (int i = 0; i <sizeof(arr)/sizeof(arr[0]) ; i++)
        {
            if(t==arr[i])
            {
                printf("The index of the customer ID is %d",i);
                return (0);
            }
        }


        printf("Customer ID not found ");

        return (0);

    }