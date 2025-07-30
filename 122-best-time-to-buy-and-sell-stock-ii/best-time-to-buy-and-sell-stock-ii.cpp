class Solution {
public:
    int maxProfit(vector<int>& nums) {

        vector<int> pos_sum(nums.size(), 0);

        pos_sum[nums.size()-1] = nums[nums.size()-1];

        for(int i=nums.size()-2; i>=0; i--){
            pos_sum[i]=max(pos_sum[i+1], nums[i]);
        }

        int buy=1, stock=-1, ans=0;
        for(int i=0; i<nums.size();  i++){
            if(!buy && stock<nums[i]){
                ans+=(nums[i]-stock);
                buy=1;
            }

            if(buy || (nums[i]<pos_sum[i])){
                buy=0;
                stock=nums[i];
            }
        }

        return ans;
    }
};