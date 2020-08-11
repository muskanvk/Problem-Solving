/* 1512. Number of Good Pairs

A pair (i,j) is called good if nums[i] == nums[j] and i < j.

Return the number of good pairs. */

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int c = 0;
        for(int i = 0; i< nums.size(); i++)
            for(int j = 1; j<nums.size(); j++)
            {
                if(nums[i]==nums[j] and (i<j))
                    c +=1;
                    
            }
                 
        return c;
    }
};
