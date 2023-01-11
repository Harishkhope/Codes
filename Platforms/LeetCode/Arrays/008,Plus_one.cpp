class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        int N=digits.size();
        for(int i=N-1;i>=0;i--)
        {
            if(digits[i]==9)
            {
                digits[i]=0;
            }
            else
            {
                digits[i]++;
                return digits;
            }
        }
        if(digits[0]==0)
        {
            digits.insert(digits.begin(),1);
        }
        return digits;
        
    }
};