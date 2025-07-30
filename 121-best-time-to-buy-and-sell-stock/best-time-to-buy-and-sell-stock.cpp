class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int mini=INT_MAX, ans=0;
        for(int i=0; i<nums.size(); i++){
            mini=min(mini, nums[i]);
            ans=max(ans, nums[i]-mini);
        }
        return ans;

    }
};