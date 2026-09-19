int majorityElement(int* nums, int numsSize) {
    int count=0;
    int mj;
    for(int i=0;i<numsSize;i++){
        if(count==0){
            count=1;
            mj=nums[i];
        }
        else if(nums[i]==mj){
            count++;
        }
        else{
            count--;
        }
    }
    return mj;
    
}