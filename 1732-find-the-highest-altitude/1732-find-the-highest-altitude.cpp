class Solution {
public:
    int max(int a,int b){
        if(a>=b) return a;
        else return b;
    }
    int largestAltitude(vector<int>& gain) {
        int res=0;
        long long sum=0;
        for(int i=0;i<gain.size();i++){
            sum=sum+gain[i];
            res=max(res,sum);
        }
        return res;
    }
};