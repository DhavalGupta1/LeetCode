void moveZeroes(int* nums, int numsSize) {
    int i=-1;
    for(int p=0;p<numsSize;p++){
        if(nums[p]==0){
            i=p;
            break;
        }
    }
    if(i==-1) return;
    int j=i+1;
    for(int q=j;q<numsSize;q++){
        if(nums[q]!=0){
            int temp=nums[q];
            nums[q]=nums[i];
            nums[i]=temp;
            i++;
        }
    }
}