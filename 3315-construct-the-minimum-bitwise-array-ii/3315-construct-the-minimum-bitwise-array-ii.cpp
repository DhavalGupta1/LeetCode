class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        int m=nums.size();
        vector<int> ans(m,-1);
        for(int i=0;i<m;i++){
            if(nums[i]%2==0){
                continue;
            }
            int n=nums[i];
            ans[i]= (n&(~(((~n)&(n+1))>>1)));
        }
        return ans;
    }
};