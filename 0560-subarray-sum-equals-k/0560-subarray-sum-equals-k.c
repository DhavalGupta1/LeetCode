int subarraySum(int* nums, int numsSize, int k) {
    int res = 0;
    long long sum = 0;
    int size = 40000001;
    int offset = 20000000;
    int *freq = (int*)calloc(size, sizeof(int));
    freq[offset] = 1;

    for(int i = 0; i < numsSize; i++) {
        sum += nums[i];

        if(sum - k + offset >= 0 && sum - k + offset < size)
            res += freq[sum - k + offset];

        freq[sum + offset]++;
    }
    return res;
}