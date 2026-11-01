class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n=nums.size();
        int mini=nums[0];
        for(int i=0;i<n;i++){
            mini=min(nums[i],mini);
        }
        int c=0;
        for(int i=0;i<n;i++){
            if(mini!=nums[i]){
               
               c +=nums[i]-mini;

            }
           
        }
        return c;
    }
};