/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
    int *res=(int*)malloc(2*sizeof(int));
    *returnSize=2;
    int l=0,h=numsSize-1;
    int lb=-1,ub=-1;
    while(l<=h){
        int mid=(l+h)/2;
        if(nums[mid]==target){
            lb=mid;
            h=mid-1;
        }
        else if(nums[mid]>target){
            h=mid-1;
        }
        else l=mid+1;
    }
    l=0,h=numsSize-1;
    while(l<=h){
        int mid=(l+h)/2;
        if(nums[mid]>target){
            ub=mid;
            h=mid-1;
        }
        else l=mid+1;
    }
    res[0]=lb;
    if(lb!=-1){
        if (ub == -1) res[1] = numsSize - 1;
        else res[1] = ub - 1;
    }
    else res[1]=-1;
    return res;
}