// class Solution {
// public:

//     int characterReplacement(string s, int k) {
//         int l=0,r=0,res=-1,freq=0;
//         map<int,int> mpp;
//         while(r<s.length()){
//             mpp[s[r]-'A']++;
//             freq=max(freq,mpp[s[r]-'A']);
//             int len=r-l+1;
//             if(len-freq>k){
//                 while(len-freq>k){
//                     mpp[s[l]-'A']--;
//                     if(mpp[s[l]-'A']==0)mpp.erase(s[l]-'A');
//                     l++;
//                     freq=0;
//                     for(auto temp:mpp){
//                         freq=max(freq,temp.second);
//                     }
//                     len=r-l+1;
//                 }
//             }
//             r++;
//             res=max(res,len);
//         }
//         return res;
//     }
// };
class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0,r=0,res=-1,freq=0;
        map<int,int> mpp;
        while(r<s.length()){
            mpp[s[r]-'A']++;
            freq=max(freq,mpp[s[r]-'A']);
            int len=r-l+1;
            if(len-freq>k){
                mpp[s[l]-'A']--;
                l++;
                len=r-l+1;
            }
            r++;
            res=max(res,len);
        }
        return res;
    }
};