class Solution {
public:
    bool checkDivisibility(int n) {
        int temp=n;
        long long pro=1;
        long long sum=0;
        while(temp>0){
            int digit=temp%10;
            pro*=digit;
            sum+=digit;
            temp/=10;
        }
        sum+=pro;
        if(n%sum!=0) return 0;
        return 1;
    }
};