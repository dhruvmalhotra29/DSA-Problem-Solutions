bool checkSubset(vector < int > & arr1, vector < int > & arr2, int n, int m) {
    // Write your code here.
    map<int,int> f1;
    map<int,int> f2;

    for(int i=0; i<n; i++)
    {
        f1[arr1[i]]++;
    }

    for(int j=0; j<m; j++)
    {
        f2[arr2[j]]++;
    }

    for(int i=0; i<m; i++)
    {
        if(f1[arr2[i]]<f2[arr2[i]])
            return false;
    }

    return true;
}