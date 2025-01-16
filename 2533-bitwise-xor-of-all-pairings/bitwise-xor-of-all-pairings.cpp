class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int ans=0;
        if(nums2.size()%2==0){
            if(nums1.size()%2==0) return ans;
            else{
                for(auto i:nums2) ans^=i;
                return ans;
            }
        }
        else{
            if(nums1.size()%2==0){
                for(auto i: nums1) ans^=i;
                return ans;
            }
            else{
                for(auto i: nums1) ans^=i;
                for(auto i: nums2) ans^=i;
                return ans;
            }
        }
    }
};