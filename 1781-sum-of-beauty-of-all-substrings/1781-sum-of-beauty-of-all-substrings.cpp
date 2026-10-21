class Solution {
public:
    int beautySum(string s) {
        long long res=0;
        for(int i=0;i<s.length();i++){
            // map<char,int> mpp;
            int hash[26]={0};
            for(int j=i;j<s.length();j++){
                // mpp[s[j]]++;
                hash[s[j]-'a']++;
                int lar=INT_MIN,low=INT_MAX;
                // for(auto inc:mpp){
                //     lar=max(lar,inc.second);
                //     low=min(low,inc.second);
                // }
                for(int k=0;k<26;k++){
                    if(hash[k]!=0){
                        lar=max(lar,hash[k]);
                        low=min(low,hash[k]);
                    }
                }
                res+=lar-low;
            }
        }
        return res;
    }
};