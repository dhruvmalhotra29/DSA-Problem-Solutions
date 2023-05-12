vector<int> searchInSortedArray(vector<int> &arr, int n, vector<int> &queries, int q)
{
	// Write your code here.

	vector<int> ans;

	for(int j=0; j<q; j++)
	{
		int no=queries[j];
		int s=0,e=n-1;
		bool f=false;
		while(s<=e)
		{
			int mid=(s+e)/2;
			if(arr[mid]<no)
			{
				s=mid+1;
			}
			else if(arr[mid]>no)
			{
				e=mid-1;
            }
			else
			{
                f = true;
                break;
            }
        }

            if (f)
                ans.push_back(1);
            else
                ans.push_back(0);

	}
        return ans;
}