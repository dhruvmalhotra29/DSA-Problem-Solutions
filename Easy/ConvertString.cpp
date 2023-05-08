string convertString(string str)
{

	str[0]=toupper(str[0]);
	int n=str.size();

	for(int i=1; i<n; i++)
	{
		if(str[i-1]==' ')
		{
			str[i]=toupper(str[i]);
		}
	}

	return str;
}