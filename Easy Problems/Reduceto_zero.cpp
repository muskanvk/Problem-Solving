//1342. Number of Steps to Reduce a Number to Zero

class Solution 
{
public:
    int numberOfSteps ( int num )
    {
        int ans = 0;
        while( num )
        {
            if( num%2 == 0 )
            {
                num = num/2;
                ans++;
            }
            else
            {
                num -= 1;
                ans++;
            }
        }
        
        return ans;
    }
};