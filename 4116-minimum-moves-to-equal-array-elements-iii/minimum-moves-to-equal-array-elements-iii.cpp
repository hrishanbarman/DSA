class Solution {
public:
    int minMoves(vector<int>& nums) {
        int l=nums[0];
        for(int i=0;i<nums.size();i++){
            if(nums[i]>l) l=nums[i];
        }
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum= sum+(l-nums[i]);
        }
        return sum;
    }
};