int missingNumber(int* nums, int numsSize) {
    int* temp = calloc(numsSize + 1, sizeof(int));
    for(int i=0;i<numsSize;i++){
        temp[nums[i]]=1;
    }
    int i=0;
    for(i=0;i<numsSize+1;i++){
        if(temp[i]==0){
            free(temp);
            return i;
        }
    }
    free(temp);
    return -1;
    // int res=nums[0];
    // for(int i=1;i<numsSize;i++){
    //     res=res^nums[i];
    // }
    // for(int i=0;i<=numsSize;i++){
    //     res=res^i;
    // }
    // return res;
}