class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        long long tot=0;
        for(int i=shifts.size()-1;i>=0;i--){
            tot+=shifts[i];
            s[i]='a'+(s[i]-'a'+(tot%26))%26;
        }
        return s;
    }
};