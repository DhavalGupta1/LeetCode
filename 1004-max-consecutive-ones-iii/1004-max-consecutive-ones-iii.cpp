class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0,r=0;
        int ze=0,res=0;
        while(r<nums.size()){
            if(nums[r]==0){
                ze++;
            }
            if(ze>k){
                while(nums[l]!=0){
                    l++;
                }
                l++;
                ze--;
            }
            int temp=r-l+1;
            res=max(res,temp);
            r++;
        }
        return res;
    }
};