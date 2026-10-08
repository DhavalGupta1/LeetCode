class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0,j=0;
        while(s[i]!='\0'&&t[j]!='\0'){
            if(s[i]==t[j]) i++;
            j++;
        }
        if(i==s.length()) return 1;
        return 0;
    }
};