int searchInsert(vector<int>& arr, int m)
{
	// Write your code here.
	int low =0,high=arr.size()-1;
	int ind=arr.size();

	while(low<=high)
	{
		int mid = (low+high)/2;
		if(arr[mid]==m)
		{
			return mid;
		}
		else if(arr[mid]<m)
		{
			low = mid+1;
		}
		else if(arr[mid]>m)
		{
			ind = mid;
			high = mid-1;
		}
	}
	return ind;
}