class Solution {
public:
    int minimumPushes(string word) {
        int res=0,see=1;
        for(int i=0;i<word.length();i++){
            res+=see;
            if((i+1)%8==0)see++;
        }
        return res;
    }
};