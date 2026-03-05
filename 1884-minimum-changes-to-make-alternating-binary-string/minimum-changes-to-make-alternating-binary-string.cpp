class Solution {
    int usefunc(string s){
        int n = s.size();
        int ans=0;
        for(int i=1; i<s.size(); i++){
            if(s[i]==s[i-1]) {
                if(s[i]=='1') s[i] = '0';
                else s[i]='1';
                ans++;
            }
        }
        return ans;
    }
public:
    int minOperations(string s) {
        int ans1 = usefunc(s);
        if(s[0]=='1') s[0]='0';
        else s[0]='1';
        int ans2 = 1 + usefunc(s);
        return min(ans1, ans2);
    }
};