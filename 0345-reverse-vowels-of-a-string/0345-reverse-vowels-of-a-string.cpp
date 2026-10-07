class Solution {
public:
    bool is(char c){
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='U'||c=='O'||c=='I'||c=='E'||c=='A') return 1;
        else return 0;
    }
    string reverseVowels(string s) {
        int l=0,r=s.length()-1;
        while(l<r){
            while(l<r&&!is(s[l])) l++;
            while(l<r&&!is(s[r])) r--;
            char temp=s[l];
            s[l]=s[r];
            s[r]=temp;
            l++;
            r--;
        }
        return s;
    }
};