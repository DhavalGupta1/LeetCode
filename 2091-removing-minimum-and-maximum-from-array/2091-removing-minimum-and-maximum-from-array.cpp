class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int mi=INT_MAX,ma=INT_MIN;
        int in1=0,in2=0;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            if(ma<nums[i]){
                ma=nums[i];
                in1=i;
            }
            if(mi>nums[i]){
                mi=nums[i];
                in2=i;
            }
        }
        int left=max(in1,in2)+1;
        int right=n-min(in1,in2);
        int both=min(in1,in2)+1+n-max(in1,in2);
        return min({left,right,both});
    }
};