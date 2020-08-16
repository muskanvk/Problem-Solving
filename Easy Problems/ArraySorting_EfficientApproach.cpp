//Check if the array is sorted or not

//Efficient APPROACH : Time Complexity = O(n)


bool isSorted(int arr[], int n){
	
	for(int i=1; i<n; i++)
	{
	if(arr[i]<arr[i-1])
	return false;
	}
    return true;
	}
	
