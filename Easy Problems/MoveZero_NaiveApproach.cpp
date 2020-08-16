// move zeroes in an array to the end while keeping the entire order of the numbers other than zero intact. 
// Time Complexity : O(N^2)

void move(int arr[], int n){
	for(int i = 0; i< n; i++)
	{
	if(arr[i]== 0)
	{
	for(int j= i+1;j<n; j++)
	{
	if arr(j != 0)
	swap(arr[i], arr[j]);
	}
	}
	}
}