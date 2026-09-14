class Solution {
public:
    int count(vector<int> &nums,int goal){
        if(goal<0) return 0;
        int l=0,r=0,sum=0,res=0;
        while(r<nums.size()){
            sum+=nums[r];
            while(sum>goal){
                sum-=nums[l];
                l++;
            }
            res+=r-l+1;
            r++;
        }
        return res;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int tot_sub_arr_for_goal=count(nums,goal);
        int tot_sub_arr_for_one_less=count(nums,goal-1);
        return tot_sub_arr_for_goal-tot_sub_arr_for_one_less;
    }
};