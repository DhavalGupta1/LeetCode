class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int p1=0;
        for(int p2=1;p2<nums.size();p2++){
            int temp=nums[p2];
            if(nums[p1]!=temp){
                nums[++p1]=temp;
            }
        }
        return p1+1;
    }
};