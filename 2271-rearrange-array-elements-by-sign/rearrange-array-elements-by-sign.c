/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* rearrangeArray(int* nums, int numsSize, int* returnSize) {
    int* result = (int*)malloc(numsSize * sizeof(int));
    int pIndex = 0, nIndex = 1;

    for(int i = 0; i<numsSize; i++) {
        if(nums[i] < 0) {
            result[nIndex] = nums[i];
            nIndex += 2;
        } else {
            result[pIndex] = nums[i];
            pIndex +=2;
        }
    }
    *returnSize = numsSize;
    return result;
}