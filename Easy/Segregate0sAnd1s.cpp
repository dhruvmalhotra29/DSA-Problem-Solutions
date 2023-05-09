void segregate0and1(int arr[], int n) {
        // code here

        int idx=0;

        for(int i=0; i<n; i++)
        {
            if(arr[i]==0)
            {
                arr[idx]=arr[i];
                idx++;
            }
        }

        for(int i=idx; i<n; i++)
        {
            arr[i]=1;
        }

        return;
    }