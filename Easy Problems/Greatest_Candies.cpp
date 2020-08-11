// 1431. Kids With the Greatest Number of Candies

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
         int m = *max_element(candies.begin(), candies.end());
        
        vector<bool> res;
        for(int i=0; i<candies.size(); i++)
        {
            int sum = candies[i];
            sum = sum + extraCandies;
            if(sum >= m)
            res.push_back(true);
            else
            res.push_back(false);
        }
        return res;
    }
};