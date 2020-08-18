// 1281. Subtract the Product and Sum of Digits of an Integer

class Solution {
public:
   
       
        int subtractProductAndSum(int n) {
            
            int prod = 1, add = 0, c= 0;
            
            
            while(n!=0){
                c = n % 10;
                prod *= c;
                add += c;
                n = n/10;
            }
         
            return prod - add;
            
        }
        
    };