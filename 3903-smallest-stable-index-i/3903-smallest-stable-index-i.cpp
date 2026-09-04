class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int less=INT_MAX,more=INT_MIN;
        int res=INT_MAX,n=nums.size();
        vector<int> arr1(n),arr2(n);
        for(int i=0;i<nums.size();i++){
            if(nums[i]>more) more=nums[i];
            arr1[i]=more;
        }
        for(int i=n-1;i>=0;i--){
            if(less>nums[i]) less=nums[i];
            arr2[i]=less;
        }
        for(int i=0;i<n;i++){
            int temp=arr1[i]-arr2[i];
            if(temp<=k&&i<res) res=i;
        }
        if(res==INT_MAX) return -1;
        else return res;
    }
};