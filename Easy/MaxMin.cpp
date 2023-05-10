int findSum(int A[], int N)
    {
    	//code here.
    	int big=INT_MIN,small=INT_MAX;
    	for(int i=0; i<N; i++)
    	{
    	    big=max(big,A[i]);
    	    small=min(small,A[i]);
    	}

    	return big+small;
    }