class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int hash1[260]={0};
        int hash2[260]={0};
        for(int i=0;i<s.length();i++){
            if(hash1[s[i]]==0&&hash2[t[i]]==0){
                hash1[s[i]]=t[i];
                hash2[t[i]]=s[i];
            }
            else{
                if(hash1[s[i]]!=t[i]) return 0;
            }
        }
        return 1;
    }
};