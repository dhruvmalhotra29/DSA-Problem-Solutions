
vector<int> copyAndReverse(vector<int> arr, int n) {
	// Write your code here.
	vector<int> copy_arr(n);
	int j=0;

	for(int i=n-1; i>=0; i--)
	{
		copy_arr[j]=arr[i];
		j++;
	}

	return copy_arr;
}