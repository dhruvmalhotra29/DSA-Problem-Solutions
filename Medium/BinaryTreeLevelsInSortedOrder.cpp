  vector <vector <int>> binTreeSortedLevels (int arr[], int n)
    {
        // Your code here
        int powerof2=1;
        vector<vector<int>> a;

        int i=0;
        while(i<n)
        {
            vector<int> b;
            for(int j=i; j<(i+powerof2) && (j<n); j++)
            {
                b.push_back(arr[j]);
            }
            sort(b.begin(),b.end());
            a.push_back(b);
            i=i+powerof2;
            powerof2*=2;
        }

        return a;
    }