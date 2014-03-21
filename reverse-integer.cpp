class Solution {
public:
    int reverse(int x) {
       int ans =0;
       bool isMinus = false;
       if(x < 0) {
           isMinus = true;
           x = -x;
       }
       while(x) {
            ans = ans*10+x%10;
            x/=10;
       }
       return ans*(isMinus?-1:1);
    }
};
