class Solution {
public:
    int minAdjacentSwaps(vector<int>& nums, int a, int b) {
        long long res = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<a){
                nums[i]=0;
            }
            else if(nums[i]>=a&&nums[i]<=b){
                nums[i]=1;
            }
            else nums[i] = 2;
        }
        // int i=0,j=0,k=nums.size()-1;
        // while(j<=k){
        //     if(nums[j]==0){
        //         swap(nums[i],nums[j]);
        //         i++;
        //         j++;
        //         res++;
        //     }
        //     else if(nums[j]==1){
        //         j++;
        //     }
        //     else{
        //         swap(nums[j],nums[k]);
        //         k--;
        //         res++;
        //     }
        // }
        long long temp1=0,temp2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                res+=temp1+temp2;
            }
            else if(nums[i]==1){
                res+=temp2;
                temp1++;
            }
            else{
                temp2++;
            }
        }
        return res%1000000007;
    }
};