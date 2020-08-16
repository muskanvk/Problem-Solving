// Find the largest element in the array and return its index.

//NAIVE APPROACH : Time Complexity = O(n^2)

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

int main(){
	int arr[] = {5,6,18,100};
	cout<<getlargest(arr,4);
	return 0; 
}