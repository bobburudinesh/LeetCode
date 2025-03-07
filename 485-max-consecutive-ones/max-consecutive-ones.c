int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int ones = 0;
    int maxOnes = 0;
    for(int i = 0; i<numsSize; i++) {
        if(nums[i] == 1) {
            ones++;
        } else {
            if(ones > maxOnes) {
                maxOnes = ones;
            }
            ones = 0;
        }
    }
    if(ones > maxOnes) {
        maxOnes = ones;
    }
    return maxOnes;

}