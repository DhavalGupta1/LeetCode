class Solution {
public:
    long long check(vector<int> &piles,int speed){
        long long ans=0;
        for(int j=0;j<piles.size();j++){
            ans+=ceil((double)piles[j]/(double)speed);
        }
        return ans;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int max=-1;
        for(int i=0;i<piles.size();i++){
            if(piles[i]>max){
                max=piles[i];
            }
        }
        int low=1;
        int res=0;
        while(low<=max){
            int mid=(low+max)/2;
            long long temp=check(piles,mid);
            if(temp<=h){
                max=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};