 //Function to find all elements in array that appear more than n/k times.
    int countOccurence(int arr[], int n, int k) {
        // Your code here
        int cnt=0;
        map<int,int> f;
        map<int,bool> vis;

        for(int i=0; i<n; i++)
        {
            f[arr[i]]++;
            if(f[arr[i]]>(n/k) and vis[arr[i]]==false)
            {
                vis[arr[i]]=true;
                cnt++;
            }
        }

        return cnt;
    }