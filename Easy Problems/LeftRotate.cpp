//Left Rotate an array by one O(N)

void Rotate(int arr[], int n){
	int temp = arr[0];
	for(int i =1; i<n; i++){
		arr[n-1] = arr[i];
		arr[n-1] = temp;
	}
	}
