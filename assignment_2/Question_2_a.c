    #include<stdio.h>
    #include<limits.h>

    int main()
    {
        int arr[7]={10,15,23,13,10,27,32};
        
        int max_t=INT_MIN;

        for (int i = 0; i <sizeof(arr)/sizeof(arr[0]) ; i++)
        {
            if(arr[i]>max_t)
            {
                max_t=arr[i];
            }
        }


        printf("The maximum element in the array is %d",max_t);

        return (0);

    }