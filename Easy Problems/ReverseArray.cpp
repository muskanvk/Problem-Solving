//Reversing an array O(N)

void reverse(int arr[], int n){
	int low = 0;
	int high = 0;
	while(low<high){
	int temp = arr[low];
	arr[low] = arr[high]; // swap
	arr[high] = temp;
	low++;
	high--;
	}
};