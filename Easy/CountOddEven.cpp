 void countOddEven(int arr[], int sizeof_array)
    {
        // your code here

        int even=0;

        for(int i=0; i<sizeof_array; i++)
        {
            if(arr[i]%2==0)
            {
                even++;
            }
        }

        cout<<sizeof_array-even<<" " <<even<<endl;


    }