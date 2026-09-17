class Solution {
public:
    string minWindow(string s, string t) {
        // map<char,int> mpp;
        int hash[256]={0};
        for(int i=0;i<t.length();i++){
            hash[t[i]]++;
        }
        int flag=0,l=0,r=0,mi=INT_MAX,in=-1;
        while(r<s.length()){
            if(hash[s[r]]>0){
                flag++;
            }
            hash[s[r]]--;
            while(flag==t.length()){
                if(r-l+1<mi){
                    in=l;
                    mi=r-l+1;
                }
                hash[s[l]]++;
                if(hash[s[l]]>0) flag--;
                l++;
            }
            r++;
        }
        if(in==-1) return "";
        string res="";
        for(int i=0;i<mi;i++) res+=s[in++];
        return res;
    }
};