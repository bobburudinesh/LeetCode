void reverseBetween(int* arr, int startIndex, int endIndex) {
    int* p1;
    int* p2;
    p1 = arr + startIndex;
    p2 = arr + endIndex;
    printf("startIndex: %d, endIndex: %d \n", startIndex,endIndex);
    for(int i = 0; i<(((endIndex - startIndex)/2) + ((endIndex - startIndex)%2)); i++) {
        //printf("i: %d, *p1 = %d, *p2 = %d\n", i,*p1,*p2);
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

