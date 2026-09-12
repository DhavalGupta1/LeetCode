class Solution {
public:
    int sumOfGoodNumbers(vector<int>& nums, int k) {
        int res=0;
        for(int i=0;i<nums.size();i++){
            int in1=i-k,in2=i+k,flag=1;
            if(in1>-1&&nums[i]<=nums[in1]) flag=0;
            if(in2<nums.size()&&nums[i]<=nums[in2]) flag=0;
            if(flag) res+=nums[i];
        }
        return res;
    }
};