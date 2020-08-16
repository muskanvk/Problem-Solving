// move zeroes in an array to the end while keeping the entire order of the numbers other than zero intact. 
// Time Complexity : O(N)

void move(int arr[], int n){
	int count = 0;
	for(int i = 0; i< n; i++)
	{
	if(arr[i] != 0])
	{
	swap(arr[i], arr[count]);
	count++;
	}
	}
}