	bool balancedNumber(string N)
	{
	    // code here

	    int n=N.size();

	    if(n==1)
	        return true;

	   int mid=n/2,s1=0,s2=0;

	   for(int i=0; i<mid; i++)
	   {
	       s1+=(N[i]-'0');
	   }

	   for(int i=mid+1; i<n; i++)
	   {
	       s2+=(N[i]-'0');
	   }

	   if(s1==s2)
	    return true;

	   return false;

	}