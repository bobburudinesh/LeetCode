int searchInsert(int* nums, int numsSize, int target) {
    int left = 0, right = numsSize-1;
    int mid = 0;
    while(left <= right) {
        mid = left + (right-left) / 2;
        if(nums[mid] == target) {
            return mid;
        }
        if(target < nums[mid]) {
            right = mid-1;
        }
        if(target > nums[mid]) {
            left = mid +1;
        }
    }
    return left;
}