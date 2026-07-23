class Solution {
public:
    bool isBalanced(string num) {
        int sumev=0,sumod=0;
        for(int i=0;i<num.length();i++){
            if(i%2==0) sumev+=(int)num[i]-'0';
            else sumod+=(int)num[i]-'0';
        }
        return sumev==sumod;
    }
};