vector < int > findDuplicates(vector < int > & arr, int n) {
    // Write your code here.
    vector<int> duplicates;
    map<int,int> f;
    map<int,bool> vis;

    for(int i=0; i<n; i++)
    {
        f[arr[i]]++;
        if(f[arr[i]]>=2 and vis[arr[i]]==false)
        {
            vis[arr[i]]=true;
            duplicates.push_back(arr[i]);
        }
    }

    return duplicates;
}