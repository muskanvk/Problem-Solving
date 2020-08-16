// Find the largest element in the array and return its index.

//EFFICIENT APPROACH : Time Complexity = O(n)

int getlargest(int arr[], int size){
	int res = 0;
	for(int i = 1; i<n; i++){
	if (arr[i]> arr[res])
	res = i;

	return res;
	}
}