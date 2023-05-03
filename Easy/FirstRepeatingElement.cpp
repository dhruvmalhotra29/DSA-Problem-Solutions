  // Function to return the position of the first repeating element.
    int firstRepeated(int arr[], int n) {
        // code here
        map<int,int> f;
        int duplicate_idx=-2;

        for(int i=0; i<n; i++)
        {
            f[arr[i]]++;
        }

        for(int i=0; i<n; i++)
        {
            if(f[arr[i]]>=2)
            {
                duplicate_idx=i;
                break;
            }
        }

        return duplicate_idx+1;
    }