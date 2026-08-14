class Solution {
public:
int max(int a,int b){
    if(a>=b) return a;
    else return b;
}
    int maximumLengthSubstring(string s) {
        int res=-1;
        for(int i=0;i<s.length();i++){
            int hash[26]={0};
            for(int j=i;j<s.length();j++){
                hash[s[j]-'a']++;
                if(hash[s[j]-'a']>2) break;
                else res=max(res,j-i+1);
            }
        }
        return res;
    }
};