class Solution {
public:
    bool checkOnesSegment(string s) {
        int i=0;
        while(s[i]!='\0'&&s[i]=='1'){
            i++;
        }
        while(s[i]!='\0'){
            if(s[i]=='1') return 0;
            i++;
        }
        return 1;
    }
};