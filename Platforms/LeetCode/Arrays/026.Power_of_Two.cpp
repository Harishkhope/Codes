class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0) return false;                // if 0 return false
        while(n%2==0) n /= 2;                 // check till ,it is divisible by 3 as we need to check power 3 
        return n==1;                          // if it remains as 1 then return true else false
        
    }
};