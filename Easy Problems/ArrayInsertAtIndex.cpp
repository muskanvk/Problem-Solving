// GFG
// You are given an array arr(0-based indexing). The size of the array is given by n. You need to update an element at the given index. The arr[i] of the array is initially set to i+1.

//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;

void insertAtIndex(int arr[],int sizeOfArray,int index,int element);

 // } Driver Code Ends


//User function Template for C++

// You need to insert the given element at the given index. 
// After inserting the elements at index, elements
// from index onward should be shifted one position ahead
// You may assume that the array already has sizeOfArray - 1
// elements.
void insertAtIndex(int arr[], int sizeOfArray, int index, int element)
{
    //Your code here
    // if given index is last element
    // then 
    if(index==sizeOfArray-1)
    {
        arr[index]=element;
        return;
    }
    
    // for any other index, you first need to shift the elements
    arr[sizeOfArray-1] = -1;
    for(int i=sizeOfArray-1;i>index;i--)
    {
        int temp=arr[i];
        arr[i]=arr[i-1];
        arr[i-1]=temp;
    }
    arr[index]=element;
}
// { Driver Code Starts.

int main() {
    int t;
    cin>>t;//Input testcases
    while(t--)
    {
        int sizeOfArray; 
        cin>>sizeOfArray;
        
        int arr[sizeOfArray];
        for(int i=0;i<sizeOfArray-1;i++)
        cin>>arr[i];
        
        int index;
        cin>>index;
        int element;
        cin>>element;
        
        insertAtIndex(arr,sizeOfArray,index,element); //Complete this function
        
        for(int i=0;i<sizeOfArray;i++)//Prrinting the array for verification
        cout<<arr[i]<<" ";
        
        cout<<endl;
        
    }
    