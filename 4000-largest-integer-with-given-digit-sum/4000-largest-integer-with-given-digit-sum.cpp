class Solution {
public:
    int largestInteger(int n, int s) {
        if(s==0) return 0;
        if(9*n<s)return -1;
        long long res=0;
        while(n!=0){
            if(s>9){
                res=res*10+9;
                s-=9;
            }
            else if(s>0){
                res=res*10+s;
                s=0;
            }
            else{
                res*=10;
            }
            n--;
        }
        return res;
    }
};