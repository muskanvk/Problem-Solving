// Find the second largest element in the array and return its index.

//NAIVE APPROACH : Time Complexity = O(n) but traverses array 2 times

int getlargest(int arr[], int size){
	for(int i = 0;i<size;i++){
	bool flag = true;
	for(int j=0;j<n;j++){
	if(arr[j] < arr[i]){
	flag = false;
	break;
	}
	}
	if(flag == true)
	return i;
	}
	return -1;

}

int secondlargest(int arr[], int size){
	int largest = getlargest(arr, n);

	int res = -1;
	for(int x= 0; x<n; x++)
	{
		if (arr[i] != arr[largest])
		{
			if (res == -1)
				res = i;
			else if (arr[i] > arr[res])
				res = i;
		}
	}
return res;
}