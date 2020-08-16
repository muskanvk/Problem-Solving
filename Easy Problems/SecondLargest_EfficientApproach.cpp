// Find the second largest element in the array and return its index.

//EFFICIENT APPROACH : Time Complexity = O(n) and traverses array 1 time


int secondlargest(int arr[], int size){
	int largest = 0; 

	int res = -1;
	for(int x= 1; x<n; x++)
	{
		if (arr[i] > arr[largest])
		{
			res = largest;
			largest = i;
		}
		else if (arr[i] != arr[largest])
		{
			if ( res == -1 || arr[i] > arr[res])
				res = i;
		}
	}
return res;
}