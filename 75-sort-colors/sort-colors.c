void sortColors(int* nums, int numsSize) {
    int arr[3] = {0,0,0};
    for (int i = 0; i<numsSize; i++) {
        if (nums[i] == 0) {
            arr[0]++;
        } else if (nums[i] == 1) {
            arr[1]++;
        } else {
            arr[2]++;
        }
    }
    
    for(int i = 0; i<arr[0]; i++) {
        nums[i] = 0;
    }
    for(int i = arr[0]; i<arr[1]+arr[0]; i++) {
        nums[i] = 1;
    }
    for(int i = arr[1]+arr[0]; i<arr[1]+arr[0]+arr[2]; i++) {
        nums[i] = 2;
    }
}
