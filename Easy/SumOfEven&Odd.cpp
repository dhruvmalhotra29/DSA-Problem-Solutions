void SumOfEvenOdd() {

	int n;
	cin>>n;

	int e=0,o=0;

	while(n)
	{
		int d=n%10;
		if(d%2==0)
		{
			e+=d;
		}
		else
		{
			o+=d;
		}
		n/=10;
	}

	cout<<e<<" "<<o<<endl;
	return;
}
