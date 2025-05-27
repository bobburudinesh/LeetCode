bool check(int* nums, int numsSize) {
    int temp = INT_MAX;
    int shift = 0;
    for(int i = 1; i<numsSize; i++) {
        if((nums[i] >= nums[i-1]) && (!shift) ) {
            temp = nums[i];
        } else if (shift && (nums[0] >= nums[i]) && (nums[i] >= nums[i-1])) {
            temp = nums[i];
        } else if((!shift) && (nums[i] < nums[i-1]))  {
            if((nums[0] < nums[i])) {
                return false;
            }
            shift = i;
            continue;
        } else {
            return false;
        }
    }
    // for(i = shift; i< numsSize; i++) {
    //     if(nums[i] >= nums[i-1]) {
    //         temp = nums[i];
    //     } else {
    //         break;
    //     }
    // }

    return true;
}