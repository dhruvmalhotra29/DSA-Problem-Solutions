int transitionPoint(int arr[], int n) {
    // code here
    int s=0,e=n-1;
    int transition_point=-1;

    while(s<=e)
    {
        int mid=(s+e)/2;
        if(arr[mid]==0)
        {
            s=mid+1;
        }
        else
        {
            transition_point=mid;
            e=mid-1;
        }
    }

    return transition_point;
}