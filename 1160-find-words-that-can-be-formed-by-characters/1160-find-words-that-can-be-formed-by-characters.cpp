class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int hash[26]={0};
        for(int i=0;i<chars.length();i++){
            hash[(int)chars[i]-'a']++;
        }
        int res=0;
        for(int n=0;n<words.size();n++){
            int temp[26];
            copy(hash,hash+26,temp);
            bool there=1;
            for(int i=0;i<words[n].length();i++){
                if(temp[(int)words[n][i]-'a']!=0)temp[(int)words[n][i]-'a']--;
                else there=0;
            }
            if(there) res+=words[n].length();
        }
        return res;
    }
};