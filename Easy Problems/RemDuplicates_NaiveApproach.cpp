// Remove Duplicates from a sorted array
// Time Complexity = O(N)
//Space Complexity = O(N)

int dup(int arr[], int n){
	int temp[n];
	temp[0] = arr[0];
	 int res = 1;

	 for(int i =1; i<n;i++){
	 if (temp[res-1] != arr[i])
	 {
	 temp[res] = arr[i];
	 res++;
	 }
	 }

	 for(int i=0; i<res; i++){
	 arr[i] = temp[i];
	 }
	 return temp;
}