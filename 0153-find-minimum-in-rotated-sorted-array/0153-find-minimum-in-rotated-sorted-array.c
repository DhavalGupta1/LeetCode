int findMin(int* nums, int numsSize) {
    int l=0,h=numsSize-1;
    int res=nums[0];
    while(l<=h){
        int mid=(l+h)/2;
        if(nums[mid]>=nums[l]){
            if(nums[l]<res) res=nums[l];
            l=mid+1;
        }
        else{
            if(nums[mid]<res) res=nums[mid];
            h=mid-1;
        }
    }
    return res;
}