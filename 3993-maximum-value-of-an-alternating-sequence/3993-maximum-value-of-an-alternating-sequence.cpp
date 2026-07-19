class Solution {
public:
    long long maximumValue(long long n, int s, int m) {
        // int flag=0;
        if(n<=1) return s;
        long long res=s;
        // for(long long i=1;i<n;i++){
        //     if(i%2!=0) res+=m;
        //     else res--;
        // }
        res+=(n/2)*m;
        res-=(n/2)-1;
        // if(n%2==0){
        //     // res++;
        // }
        // if(n%2==0) return res;
        return res;
    }
};