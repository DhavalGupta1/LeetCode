/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** fourSum(int* nums, int numsSize, int target, int* returnSize, int** returnColumnSizes) {
    
    for(int i=0;i<numsSize;i++){
        int min=i;
        for(int j=i+1;j<numsSize;j++){
            if(nums[min]>nums[j]){
                min=j;
            }
        }
        int temp=nums[min];
        nums[min]=nums[i];
        nums[i]=temp;
    }

    int **res=(int**)malloc(500*sizeof(int));
    *returnColumnSizes=malloc(500*sizeof(int*));
    *returnSize=0;

    for(int i=0;i<numsSize;i++){
        if(i>0 && nums[i]==nums[i-1]){
            continue;
        }
        for(int j=i+1;j<numsSize;j++){
            if(j!=i+1&&nums[j]==nums[j-1]){
                continue;
            }
            int k=j+1;
            int l=numsSize-1;
            while(k<l){
                long long sum=nums[i];
                sum+=nums[j];
                sum+=nums[k];
                sum+=nums[l];
                if(sum<target){
                    k++;
                }
                else if(sum>target){
                    l--;
                }
                else{
                    res[*returnSize]=malloc(4*sizeof(int));
                    res[*returnSize][0]=nums[i];
                    res[*returnSize][1]=nums[j];
                    res[*returnSize][2]=nums[k];
                    res[*returnSize][3]=nums[l];
                    (*returnColumnSizes)[*returnSize] = 4;
                    (*returnSize)++;
                    k++;
                    l--;
                    while(k<l&&nums[k]==nums[k-1]){
                        k++;
                    }
                    while(k<l&&nums[l]==nums[l+1]){
                        l--;
                    }
                }
            }
        }
    }
    return res;
}