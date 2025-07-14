class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        vector<int> pre(nums.size()+1, 0);
        int ans=0;
        for(int i=0; i<nums.size(); i++){
            pre[i+1]+=pre[i]+nums[i];
        }

        for(int i=1; i<pre.size(); i++){
            for(int j=i; j<pre.size(); j++){
                if(pre[j]-pre[i-1]==k) ans++;
            }
        }
        return ans;
    }
};