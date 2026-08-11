class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int sum=nums[0];
        int hash[51]={0};
        if(nums.size()==1)return sum+1;
        for(int i=0;i<nums.size();i++)hash[nums[i]]++;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]+1){
                sum+=nums[i];
            }
            else{
                break;
            }
        }
        while(true){
            if(sum>50||hash[sum]==0) return sum;
            sum++;
        }
        return -1;
    }
};