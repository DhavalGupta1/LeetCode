bool uniformArray(int* nums1, int nums1Size) {
    int e=0,o=0;
    for(int i=0;i<nums1Size;i++){
        if(nums1[i]%2==0)
            e++;
        else
            o++;
    }
    if(e==nums1Size||o==nums1Size)
        return 1;
    if(e==(nums1Size/2)||o>=1)
        return 1;
    return 0;
}