class Solution {
public:
    void make(int ind,vector<int> &arr,int target,vector<int> &carry,vector<vector<int>> &res){
        if(target==0){
            res.push_back(carry);
            return;
        }
        for(int i=ind;i<arr.size();i++){
            if(i>ind&&arr[i]==arr[i-1]){
                continue;
            }
            if(arr[i]>target){
                break;
            }
            carry.push_back(arr[i]);
            make(i+1,arr,target-arr[i],carry,res);
            carry.pop_back();
        }
    }   
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> res;
        vector<int> carry;
        make(0,candidates,target,carry,res);
        return res;
    }
};