//1528. Shuffle String

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int length=s.length();
        //cout<<length;
        string ans=s; int index; 
        for(int i=0;i<length;i++)
        {
            index=indices[i];
            ans[index]=s[i];
            
        }
       // cout<<ans;
        return ans;
        
    }};