void moveZerosToLeft(int *arr, int n)
{
    // Write your code here

    int p=n-1;

    for(int i=n-1; i>=0; i--)
    {
        if(arr[i]!=0)
        {
            arr[p]=arr[i];
            p--;
        }
    }

    for(int i=0; i<=p; i++)
    {
        arr[i]=0;
    }

    return;


}
