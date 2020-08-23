// 1534. Count Good Triplets

class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int arr_size=arr.size();
        if(arr_size<=2) return 0;
        int result=0;
        for(int i=0;i<arr_size-2;i++){
            for(int j=i+1;j<arr_size-1;j++){
                for(int k=j+1;k<arr_size;k++){
                    if(abs(arr[i] - arr[j]) <= a&&
                       abs(arr[j] - arr[k]) <= b&&
                       abs(arr[i] - arr[k]) <= c)
                        result++;
                }
            }   
        }
        return result;
    }
};