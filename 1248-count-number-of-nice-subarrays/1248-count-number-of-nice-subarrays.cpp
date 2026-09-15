class Solution {
public:
    int count(vector<int> &nums,int k){
        if(k<0) return 0;
        int l=0,r=0,res=0;
        int sum=0;
        while(r<nums.size()){
            sum+=nums[r]%2;
            while(sum>k){
                sum-=nums[l]%2;
                l++;
            }
            int sub=r-l+1;
            res+=sub;
            r++;
        }
        return res;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        int for_k=count(nums,k);
        int for_oneless=count(nums,k-1);
        return for_k-for_oneless;
    }
};