class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans(nums.size());
        int l=0,r=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                ans[l]=nums[i];
                l=l+2;
            }
            else{
                ans[r]=nums[i];
                r= r+2;
            }
        }
        return ans;
    }
};