int* rearrangeArray(int* nums, int numsSize, int* returnSize) {
    int* r=(int*)malloc(numsSize*sizeof(int));
    *returnSize=numsSize;
    int a=0,b=1;
    for(int i=0;i<numsSize;i++){
        if(nums[i]<0){
            r[b]=nums[i];
            b+=2;
        }
        else{
            r[a]=nums[i];
            a+=2;
        }
    }
    return r;
}