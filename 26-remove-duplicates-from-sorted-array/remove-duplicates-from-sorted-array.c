void swap(int* a, int* b) {
    int temp = *b;
    *b = *a;
    *a = temp;
}
int removeDuplicates(int* nums, int numsSize) {
    if(numsSize <1) {
        return 0;
    }
    // int uniqueNums = 1;
    // for(int i = 1; i<numsSize; i++) {
    //     if(nums[i] > nums[i-1]) {
    //         nums[uniqueNums] = nums[i];
    //         uniqueNums++;
    //     } 
    // }
    // return uniqueNums;

    // Above is solution 1

    //Below is solution 2
    int *p; // iterating pointer
    int *q;
    p = nums;
    q = nums;
    p++;
    for(int i = 1; i<numsSize; i++) {
        if(*p != *q) {
            q++;
            *q = *p;
        } 
        p++;
    }
    return ((int)(q-nums) + 1);
}
