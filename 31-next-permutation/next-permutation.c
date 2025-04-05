void reverseArray(int* arr, int start, int end) {
    while(start < end) {
        int temp = arr[start];
        arr[start] = arr[end-1];
        arr[end-1] = temp;
        start++;
        end--;
    }
}
void nextPermutation(int* nums, int numsSize) {
    int breakPoint = -1;
    for(int i = numsSize - 2; i >= 0; i-- ) {
        
        if(nums[i] < nums[i+1]) {
            breakPoint = i;
            break;
        }
    }
    if(breakPoint == -1) {
        reverseArray(nums, 0,numsSize);
        return;
    }
    for(int i = numsSize-1; i>breakPoint; i--) {
        if(nums[i] > nums[breakPoint]) {
            int temp = nums[i];
            nums[i] = nums[breakPoint];
            nums[breakPoint] = temp;
            break;
        }
    }
    
    reverseArray(nums, breakPoint+1,numsSize);
    
}