class Solution {
public:
    int jump(vector<int>& nums) {
        int farpoint = 0;
        int jumps = 0;
        int currentend =0;

        for(int i=0; i<nums.size()-1; i++){
            farpoint = max(farpoint, i+nums[i]);

            if(i==currentend){
                jumps++;
                currentend = farpoint;

                if(currentend >= nums.size()-1) break;
            }
        }
        return jumps;
    }
};