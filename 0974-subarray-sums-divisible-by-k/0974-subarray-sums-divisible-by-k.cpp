class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        map<int,int> mpp;
        int res=0,sum=0;
        mpp[sum]=1;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            int find=sum%k;
            if(find<0){
                find+=k;
            }
            res+=mpp[find];
            mpp[find]++;
        }
        return res;
    }
};