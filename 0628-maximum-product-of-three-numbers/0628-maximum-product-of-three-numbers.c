int maximumProduct(int* a, int n) {
    // for(int i=0;i<numsSize;i++){
    //     int ch = i;
    //     for(int j=i+1;j<numsSize;j++){
    //         if(nums[ch]<=nums[j]){
    //             ch=j;
    //         }
    //     }
    //     int temp=nums[i];
    //     nums[i]=nums[ch];
    //     nums[ch]=temp;
    //     printf("%d ",nums[i]);
    // }
    // int sum1=0,sum2=0;
    // sum1=nums[0]*nums[1]*nums[2];
    // sum2=nums[numsSize-1]*nums[numsSize-2]*nums[0];
    int x=INT_MIN,y=INT_MIN,z=INT_MIN;
    int p=INT_MAX,q=INT_MAX;
    for (int i=0;i<n;i++){
        if (a[i]>x){
            z=y;
            y=x;
            x=a[i];
        } else if (a[i]>y){
            z=y;
            y=a[i];
        } else if (a[i]>z){
            z=a[i];
        }
        if (a[i]<p){
            q=p;
            p=a[i];
        } else if (a[i]<q){
            q=a[i];
        }
    }
    int sum1 = x*y*z;
    int sum2 = p*q*x;
    if(sum1>sum2) return sum1;
    else return sum2;
}