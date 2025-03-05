int removeDuplicates(int* nums, int numsSize) {
    if(numsSize <1) {
        return 0;
    }
    int uniqueNums = 1;
    for(int i = 1; i<numsSize; i++) {
        if(nums[i] > nums[i-1]) {
            nums[uniqueNums] = nums[i];
            uniqueNums++;
        } 
    }
    return uniqueNums;
}
