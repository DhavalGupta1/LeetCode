class Solution {
public:
    string longestPalindrome(string s) {
        int st=-1,end=-1,ma=-1;
        string res="";
        for(int i=0;i<s.length();i++){
            int l=i,r=i;
            while(l>=0&&r<s.length()&&s[l]==s[r]){
                if(r-l+1>ma){
                    st=l;
                    end=r;
                    ma=r-l+1;
                }
                l--;
                r++;
            }
            l=i,r=i+1;
            while(l>=0&&r<s.length()&&s[l]==s[r]){
                if(r-l+1>ma){
                    st=l;
                    end=r;
                    ma=r-l+1;
                }
                l--;
                r++;
            }
        }
        // int k=0;
        for(int i=st;i<=end;i++){
            // res[k]=s[i];
            res.push_back(s[i]);
            // k++;
        }
        // cout<<res[0];
        return res;
    }
};