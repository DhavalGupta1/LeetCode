class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        int hash[26]={0};
        for(int i=0;i<s.length();i++){
            hash[(int)s[i]-'a']++;
        }
        int res=0;
        while(true){
            bool there=1;
            for(int i=0;i<target.length();i++){
                if(hash[(int)target[i]-'a']!=0)hash[(int)target[i]-'a']--;
                else there=0;
            }
            if(there) res++;
            else break;
        }
        return res;
    }
};