class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        
       
        vector<vector<int>> ans;
        for (int i=0; i<matrix[0].size(); i++){ //no of cols
            vector<int> v;
            for (int j= 0; j<matrix.size(); j++){ // no of rows
                v.push_back(matrix[j][i]);
            }
            ans.push_back(v);
        }
        
        return ans;
        
    }
};