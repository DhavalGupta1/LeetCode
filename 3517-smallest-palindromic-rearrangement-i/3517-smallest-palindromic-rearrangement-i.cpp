class Solution {
public:
    string smallestPalindrome(string s) {
        int hash[26]={0};
        for(int i=0;i<s.length();i++){
            hash[s[i]-'a']++;
            }
        char temp=0;
        string res="";
        for(int i=0;i<26;i++){
            if(hash[i]%2==1)temp=i+'a';
            for(int j=0;j<hash[i]/2;j++){
                res+='a'+i;
            }
            hash[i]/=2;
        }
        if(temp!=0)res+=temp;
        for(int i=25;i>=0;i--){
            for(int j=0;j<hash[i];j++){
                    res+='a'+i;
            }
        }
        return res;
    }
};