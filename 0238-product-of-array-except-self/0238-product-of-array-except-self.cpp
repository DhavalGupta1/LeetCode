class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> pre(n),pos(n);
        int p=1;
        for(int i=0;i<n;i++){
            pre[i]=p;
            p*=nums[i];
        }
        p=1;
        for(int i=n-1;i>=0;i--){
            pos[i]=p;
            p*=nums[i];
        }
        vector<int> res;
        for(int i=0;i<n;i++){
            res.push_back(pre[i]*pos[i]);
        }
        return res;
    }
};