int lowerBound(vector<int> arr, int n, int x) {
	// Write your code here
	int low=0,high=n-1;
	int ind = n;
	while(low<=high)
	{
		int mid = (low+high)/2;
		if(arr[mid]>=x)
		{
			ind = mid;
			high = mid-1;
		}
		else
		{
			low = mid+1;
		}
	}

	return ind;
}
