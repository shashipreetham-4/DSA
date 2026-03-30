class Solution {
    bool helper(vector<bool> dp, int d, int i){
        for(int j=0; j<d; j++){
            if(dp[i+j+1]) return true;
        }
        return false;
    }

public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        vector<bool> dp (nums.size(), false);
        dp[n-1] = true;

        for(int i=n-2; i>=0; i--){
            dp[i] = helper(dp, nums[i], i);
        }
        if(dp[0]) return true;
        else return false;
    }
};