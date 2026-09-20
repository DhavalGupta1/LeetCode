class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long long sum=0;
        long long res=INT_MIN;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            res=max(res,sum);
            if(sum<0) sum=0;
        }
        return res;
    }
};