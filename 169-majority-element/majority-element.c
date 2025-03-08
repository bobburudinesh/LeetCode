int majorityElement(int* nums, int numsSize) {
    int maj;
    int cnt = 0;
    for(int i = 0; i<numsSize; i++) {
        if(cnt == 0) {
            cnt = 1;
            maj = nums[i];
        } else if(nums[i] == maj) {
            cnt++;
        } else {
            cnt--;
        }
    }
    int vcnt = 0;
    for(int i = 0; i<numsSize; i++) {
        if(maj == nums[i]) {
            vcnt++;
        }
    }
    if(vcnt > (numsSize/2)) {
        return maj;
    }
    return -1;
}