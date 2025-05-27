bool check(int* nums, int numsSize) {
    int shift = 0;
    for(int i = 1; i<numsSize; i++) {
        if(nums[i-1] > nums[i]) {
            shift++;
        }
    }
    if(nums[numsSize-1] > nums[0]) {
            shift++;
    }
    return shift <= 1;
}