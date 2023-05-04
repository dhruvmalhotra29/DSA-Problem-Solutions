   int firstNonRepeating(int arr[], int n)
    {
        // Complete the function
        // Array consists of only positive and negative integers and not zero.

        map<int,int> f;
        int ans=0;

        for(int i=0; i<n; i++)
        {
            f[arr[i]]++;
        }

        for(int i=0; i<n; i++)
        {
            if(f[arr[i]]==1)
            {
                ans=arr[i];
                break;
            }
        }

        return ans;

    }