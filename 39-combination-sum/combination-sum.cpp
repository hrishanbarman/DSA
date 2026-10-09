class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        findcombination(0,target,candidates,ans,ds);
        return ans;
    }
    void findcombination(int ind,int target,vector<int> &ar,vector<vector<int>> &ans,vector<int> &ds){
        if(ind==ar.size()){
            if(target==0){
                ans.push_back(ds);
                
            }
            return;
        }

        if(ar[ind]<=target){
            ds.push_back(ar[ind]);
            findcombination(ind,target-ar[ind],ar,ans,ds);
            ds.pop_back();

        }
        findcombination(ind+1,target,ar,ans,ds);
    }

};