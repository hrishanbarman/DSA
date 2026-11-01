class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        int longest=1;
        unordered_set<int> ans;
        for(int i=0;i<nums.size();i++) {
            ans.insert(nums[i]);
        }
        for(auto it:ans){
            if(ans.find(it-1)==ans.end()){
                int c=1;
                int x=it;
                while(ans.find(x+1) != ans.end()){
                    x=x+1;
                    c++;
                }
                longest=max(longest,c);
            }
        }
        return longest;
    }
};