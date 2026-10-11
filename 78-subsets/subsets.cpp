class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        helper(0,ds,nums,ans);
        return ans;
    }
    void helper(int ind,vector<int> &ds,vector<int> &nums,vector<vector<int>> &ans){
        ans.push_back(ds);
        for(int i=ind;i<nums.size();i++){
            ds.push_back(nums[i]);
            helper(i+1,ds,nums,ans);
            ds.pop_back();
        }
    }
    
};