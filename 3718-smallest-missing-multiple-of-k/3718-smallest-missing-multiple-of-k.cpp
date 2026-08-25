class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int hash[101]={0};
        for(int i=0;i<nums.size();i++){
            hash[nums[i]]++;
        }
        int i;
        for(i=k;i<=100;i+=k){
            if(hash[i]==0){
                return i;
            }
        }
        return i;
    }
};