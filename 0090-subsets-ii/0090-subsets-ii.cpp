class Solution {
public:
    void make(int ind,vector<int> &nums,vector<int> &carry,vector<vector<int>> &res){
        if(ind==nums.size()){
            return;
        }
        for(int i=ind;i<nums.size();i++){
            if(i>ind&&nums[i]==nums[i-1]){
                continue;
            }
            carry.push_back(nums[i]);
            res.push_back(carry);
            make(i+1,nums,carry,res);
            carry.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> carry;
        vector<vector<int>> res;
        res.push_back(carry);
        make(0,nums,carry,res);
        return res;
    }
};