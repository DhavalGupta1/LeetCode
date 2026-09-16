class Solution {
public:
    long long count(vector<int> &nums,int k){
        if(k<0) return 0;
        int l=0,r=0;
        map<int,int> mpp;
        long long res=0;
        while(r<nums.size()){
            mpp[nums[r]]++;
            while(mpp.size()>k){
                mpp[nums[l]]--;
                if(mpp[nums[l]]==0) mpp.erase(nums[l]);
                l++;
            }
            int len=r-l+1;
            res+=len;
            r++;
        }
        return res;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        long long fork=count(nums,k);
        long long foroneless=count(nums,k-1);
        return fork-foroneless;
    }
};