int findSecondLargest(int n, vector<int> &arr)
{
        // Write your code here.
    int large=INT_MIN,second_large=INT_MIN;

    for(int i=0; i<n; i++)
    {
        if(arr[i]>large)
            large=arr[i];
    }

    for(int i=0; i<n; i++)
    {
        if(arr[i]>second_large and arr[i]<large)
            second_large=arr[i];
    }

    if(second_large==INT_MIN)
        second_large=-1;

    return second_large;

}