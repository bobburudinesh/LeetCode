bool check(int* nums, int numsSize) {
    int shift = 0;
    for(int i = 1; i<numsSize; i++) {
        if(nums[i-1] > nums[i]) {
            shift++;
        }
        // if((nums[i] >= nums[i-1]) && (!shift) ) {
        //     temp = nums[i];
        // } else if (shift && (nums[0] >= nums[i]) && (nums[i] >= nums[i-1])) {
        //     temp = nums[i];
        // } else if((!shift) && (nums[i] < nums[i-1]))  {
        //     if((nums[0] < nums[i])) {
        //         return false;
        //     }
        //     shift = i;
        //     continue;
        // } else {
        //     return false;
        // }
    }
    if(nums[numsSize-1] > nums[0]) {
            shift++;
    }
    return shift <= 1;
}