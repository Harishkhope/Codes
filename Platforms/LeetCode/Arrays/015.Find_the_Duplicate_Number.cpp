class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        int duplicate;
        // vector<int>v;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto x:mp)
        {
            if(x.second>1){
                duplicate=x.first;
                break;
            }
        }
        return duplicate;
    }
};