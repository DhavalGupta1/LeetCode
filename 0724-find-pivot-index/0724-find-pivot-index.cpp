class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        vector<int> st(n),ed(n);
        int sum=0;
        for(int i=0;i<n;i++){
            st[i]=sum;
            sum+=nums[i];
        }
        sum=0;
        for(int i=n-1;i>=0;i--){
            ed[i]=sum;
            sum+=nums[i];
        }
        for(int i=0;i<n;i++){
            if(st[i]==ed[i]) return i;
        }
        return -1;
    }
};