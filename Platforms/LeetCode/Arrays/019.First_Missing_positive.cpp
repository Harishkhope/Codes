class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
         unordered_map<int,int> mp;
        int n=nums.size();
       for(int i=0;i<n;i++){
           mp[nums[i]]++;
       }
       for(int i=1;i<=n+1;i++)
        {
            if(mp.find(i)==mp.end())
                return i;
        }
        return -1;
        
    }
};