//1365. How Many Numbers Are Smaller Than the Current Number

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>res, copy;
        copy = nums;
        sort(nums.begin(), nums.end());
        map<int,int>mp;
        res.push_back(0);
        for (int i = 1;i<nums.size();i++) {
            if (nums[i] == nums[i-1]) {
                res.push_back(res.back());
                mp[nums[i]] = res.back();
            } else {
                mp[nums[i]] = i;
                res.push_back(i);
            }
        }
        for (int i = 0;i<copy.size();i++) {
            res[i] = mp[copy[i]];
        }
        return res;
    }
};