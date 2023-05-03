 int findSpecialInteger(vector<int>& arr) {

        int n=arr.size();
        map<int,int> f;
        int ans;

        for(int i=0; i<n; i++)
        {
            f[arr[i]]++;
            if(f[arr[i]]>(n/4))
            {
                ans=arr[i];
                break;
            }
        }

        return ans;
    }