class Solution {
public:
    int minDeletionSize(vector<string>& str) {
        int l = str.size();
        if(l<2 || str[0].size() < 1) return 0;

        int ans=0;

        for(int i=0; i<str[0].size(); i++){
            int j=1;
            while(j<l && str[j][i]>=str[j-1][i]){
                j++;
            }
            if(j!=l) ans++;
        }
        return ans;
    }
};