class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int i=0;
        int cl=INT_MAX,res=0;
        for(int i=0;i<nums.size();i++){
            if(i>0&&nums[i]==nums[i-1])continue;
            int j=i+1;
            int k=nums.size()-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(abs(sum-target)<cl){
                    cl=abs(sum-target);
                    res=sum;
                }
                if(sum<target)j++;
                else k--;
            }
        }
        return res;
    }
};