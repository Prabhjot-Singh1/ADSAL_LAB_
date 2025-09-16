    #include<stdio.h>

    int main()
    {
        int arr[7]={10,15,23,13,10,27,32};
        int n=sizeof(arr)/sizeof(arr[0]);

        //Sorting the array
         for (int i = 0; i <n-1 ; i++)
         {
             for (int j = 0; j <n-i ; j++)
             {
                if(arr[j]>arr[j+1])
                {
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }

             }
         }

         //sorted array print
         for (size_t i = 0; i < n; i++)
         {
            printf("%d  ",arr[i]);
         }
    


        printf("Maximum temperature found is %d",arr[n-1]);

        return (0);

    }