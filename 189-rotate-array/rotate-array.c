void reverseBetween(int* arr, int startIndex, int endIndex) {
    int* p1;
    int* p2;
    p1 = arr + startIndex;
    p2 = arr + endIndex;
    for(int i = 0; i<(((endIndex - startIndex)/2) + ((endIndex - startIndex)%2)); i++) {
        int temp = *p1;
        *p1 = *p2;
        *p2 = temp;
        p1++;
        p2--;
    }
}

void rotate(int* nums, int numsSize, int k) {
    int* temp;
    int shift = k % numsSize;
    
    if(shift>0) {
        reverseBetween(nums, 0, (numsSize-1-shift));
        reverseBetween(nums, (numsSize-shift), (numsSize-1));
        reverseBetween(nums, 0, (numsSize-1));
    } else {
        return;
    }
    
}

