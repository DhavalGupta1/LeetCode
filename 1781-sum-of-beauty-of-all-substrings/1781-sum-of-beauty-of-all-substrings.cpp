class Solution {
public:
    int beautySum(string s) {
        long long res=0;
        for(int i=0;i<s.length();i++){
            map<char,int> mpp;
            for(int j=i;j<s.length();j++){
                mpp[s[j]]++;
                int lar=INT_MIN,low=INT_MAX;
                for(auto inc:mpp){
                    lar=max(lar,inc.second);
                    low=min(low,inc.second);
                }
                res+=lar-low;
            }
        }
        return res;
    }
};