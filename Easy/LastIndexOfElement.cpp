int main() {
    //Write your code here
    int n;
    cin>>n;

    vector<int> a(n);

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int x;
    cin>>x;
    int idx=-1;

    for(int i=0; i<n; i++)
    {
        if(a[i]==x)
        {
            idx=i;
        }
    }

    cout<<idx<<endl;

    return 0;
}