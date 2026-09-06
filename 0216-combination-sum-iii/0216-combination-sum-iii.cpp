class Solution {
public:
    void make(int ind,vector<int> &arr,int target,vector<int> &carry,vector<vector<int>> &res,int pickedup,int n){
        if(pickedup==n||target<0||ind==arr.size()){
            if(pickedup==n&&target==0){
                res.push_back(carry);
            }
            return;
        }
        carry.push_back(arr[ind]);
        make(ind+1,arr,target-arr[ind],carry,res,pickedup+1,n);
        carry.pop_back();
        make(ind+1,arr,target,carry,res,pickedup,n);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> res;
        vector<int> arr={1,2,3,4,5,6,7,8,9};
        vector<int> carry;
        make(0,arr,n,carry,res,0,k);
        return res;
    }
};