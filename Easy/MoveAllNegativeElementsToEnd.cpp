 void segregateElements(int arr[],int n)
    {
        // Your code goes here
        int brr[n],k=0;

        memset(brr,-1,sizeof(n));

        for(int i=0; i<n; i++)
        {
            if(arr[i]>=0)
            {
                brr[k]=arr[i];
                k++;
            }
        }

        for(int i=0; i<n; i++)
        {
            if(arr[i]<0)
            {
                brr[k]=arr[i];
                k++;
            }
        }

        for(int i=0; i<n; i++)
            arr[i]=brr[i];

        return;
    }