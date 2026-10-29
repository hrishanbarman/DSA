class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans1, ans2,ans;
        int l=0,r=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0) ans1.push_back(nums[i]);
            else ans2.push_back(nums[i]);
            }
        for(int i=0;i<nums.size();i++){
            if(i%2==0) {
                ans.push_back(ans1[l]);
                l++;
            }
            else {
                ans.push_back(ans2[r]);
                r++;
        }
        }
        return ans;
    }
};