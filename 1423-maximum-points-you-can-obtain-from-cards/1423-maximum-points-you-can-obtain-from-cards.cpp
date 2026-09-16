class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int l=0,r=cardPoints.size()-1;
        long long sum=0,res=0;
        for(int i=0;i<k;i++){
            sum+=cardPoints[l];
            l++;
        }
        l--;
        res=max(res,sum);
        for(int i=0;i<k;i++){
            sum-=cardPoints[l];
            sum+=cardPoints[r];
            res=max(res,sum);
            l--;
            r--;
        }
        return res;
    }
};