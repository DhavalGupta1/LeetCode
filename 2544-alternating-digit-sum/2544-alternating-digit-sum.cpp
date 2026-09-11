class Solution {
public:
    int alternateDigitSum(int n) {
        int temp=n,count=0,res=0,flag;
        while(temp>0){
            count++;
            temp/=10;
        }
        if(count%2==0) flag=-1;
        else flag=1;
        while(n>0){
            int digit=n%10;
            res+=flag*digit;
            flag*=-1;
            n/=10;
        }
        return res;
    }
};