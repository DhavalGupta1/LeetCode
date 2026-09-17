class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return 0;
        map<int,int> mpp;
        for(int i=0;i<s.length();i++){
            mpp[s[i]]++;
        }
        for(int i=0;i<t.length();i++){
            mpp[t[i]]--;
            if(mpp[t[i]]==0)mpp.erase(t[i]);
        }
        if(mpp.size()==0) return 1;

        return 0;
    }
};