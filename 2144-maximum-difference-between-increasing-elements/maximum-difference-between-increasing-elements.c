int maximumDifference(int* nums, int numsSize) {
    int i = 0, smallest = nums[0], currentDiff = -1;
    while(i<numsSize) {
        if(nums[i] < smallest) {
            smallest = nums[i];
        }
        if((nums[i] - smallest) > currentDiff) {
            currentDiff = nums[i] - smallest;
        }
        i++;
    }
    return (currentDiff > 0) ? currentDiff : -1;
}