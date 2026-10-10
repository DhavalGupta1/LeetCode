class Solution {
public:
    bool check(string s,int st,int ed){
        while(st<ed){
            if(s[st]!=s[ed]) return 0;
            st++;
            ed--;
        }
        return 1;
    }
    bool validPalindrome(string s) {
        int st=0,ed=s.length()-1;
        while(st<ed){
            if(s[st]!=s[ed]){
                return check(s,st+1,ed)||check(s,st,ed-1);
            }
            st++;
            ed--;
        }
        return 1;
    }
};