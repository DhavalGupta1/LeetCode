class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int res=0,flag=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) flag*=0;
            else flag+=nums[i];
            res=max(res,flag);
        }
        return res;
    }
};