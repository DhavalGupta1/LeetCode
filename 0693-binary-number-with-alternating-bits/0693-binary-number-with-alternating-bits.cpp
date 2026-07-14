class Solution {
public:
    bool hasAlternatingBits(int n) {
        string temp;
        int i=1;
        if(n%2==0) temp+="0";
        else temp+="1";
        n/=2;
        while(n>0){
            if(n%2==0) temp+="0";
            else temp+="1";
            if(temp[i]==temp[i-1]) return 0;
            i++;
            n/=2;
        }
        return 1;
    }
};