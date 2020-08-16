//Check if the array is sorted or not

//NAIVE APPROACH : Time Complexity = O(n^2)


bool isSorted(int arr[], int n){
	
	for(int i=0; i<n; i++)
	for(int j=i+1; j<n; j++){

	if(arr[j]<arr[i])
	return false;
	}
    return true;
	}
	
