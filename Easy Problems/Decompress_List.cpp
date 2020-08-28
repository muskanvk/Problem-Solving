
//1313. Decompress Run-Length Encoded List


class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector <int> out;
        
        for(int i=0; i < nums.size(); i=i+2){
            // (size, init_val)
            vector<int> tmp(nums[i], nums[i+1]);
            out.insert(out.end(),tmp.begin(),tmp.end());
        }
        
        return out;
    }
};