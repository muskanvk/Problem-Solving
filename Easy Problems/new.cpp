// /1486. XOR Operation in an Array

class Solution {
public:
    int xorOperation(int n, int start) {
        
        int arr [n];
        for(int x=0; x< n; x++){
            arr[x] = start + (2*x);
        }
        
        int xo = 0;
        for(int x=0; x< n; x++){
            
        xo ^= arr[x];
        
    }
        return xo;
    }
};