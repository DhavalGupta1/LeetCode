class Solution {
public:
    int check(vector<int> &nums,int ch){
        int temp=0;
        int su=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>ch) return 0;
            if(temp+nums[i]<=ch){
                temp+=nums[i];
            }
            else{
                temp=nums[i];
                su++;
            }
        }
        return su;
    }
    int splitArray(vector<int>& nums, int k) {
        int low = nums[0],high=0;
        for(int i=0;i<nums.size();i++){
            if(low<nums[i]) low=nums[i];
            high+=nums[i];
        }
        while(low<=high){
            int mid=(low+high)/2;
            int sum=check(nums,mid);
            if(sum>k){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return low;
    }
};