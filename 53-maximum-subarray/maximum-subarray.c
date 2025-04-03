int maxSubArray(int* nums, int numsSize) {
    int sum = 0, max = INT_MIN;
    int i = 0;
    for(int i = 0; i< numsSize; i++) {
        sum += nums[i];
        if(sum > max) {
            max = sum;
        }
        if(sum < 0) {
            sum = 0;
        }
    }
    return max;
}