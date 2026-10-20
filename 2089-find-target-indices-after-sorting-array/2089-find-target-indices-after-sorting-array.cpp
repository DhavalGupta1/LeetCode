class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> res;
        int hash[101]={0};
        for(int i=0;i<nums.size();i++){
            hash[nums[i]]++;
        }
        int ind=0;
        for(int i=1;i<101;i++){
            if(i==target){
                while(hash[i]){
                    res.push_back(ind);
                    ind++;
                    hash[i]--;
                }
                break;
            }
            else{
                ind+=hash[i];
            }
        }
        return res;
    }
};