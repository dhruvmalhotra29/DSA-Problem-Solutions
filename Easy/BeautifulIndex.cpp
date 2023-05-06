int beautifulIndex(int N, vector<int> A)
{
    // Write your code here.

	int suffix=0,prefix=0,beautiful_idx=-1;

	for(int i=0; i<N; i++)
	{
		suffix+=A[i];
	}

	if((suffix-A[0])==prefix)
	{
		beautiful_idx=1;
		return beautiful_idx;
	}

	suffix-=A[0];

	for(int i=1; i<(N-1); i++)
	{
		prefix+=A[i-1];
		suffix-=A[i];
		if(prefix==suffix)
		{
			beautiful_idx=i+1;
			break;
		}
	}

	if(beautiful_idx==-1 and (suffix-A[N-1])==prefix)
	{
		beautiful_idx=N;
	}

	return beautiful_idx;
}