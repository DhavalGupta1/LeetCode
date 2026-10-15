class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int res=INT_MAX,l=0;
        int sum=0;
        for(int r=0;r<nums.size();r++){
            sum+=nums[r];
            while(sum>=target){
                res=min(r-l+1,res);
                sum-=nums[l];
                l++;
            }
        }
        if(res==INT_MAX) return 0;
        else return res;
    }
};