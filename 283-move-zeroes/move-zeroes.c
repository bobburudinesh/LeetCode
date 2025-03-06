void swapNumbers(int* p,int* q) {
    int temp = *q;
    *q = *p;
    *p = temp;
}
void moveZeroes(int* nums, int numsSize) {
    int *p1, *p2;
    p1 = nums;
    p2 = nums;
    if(*p1 != 0) {

    }
     for (int i = 0; i<numsSize; i++) {
        if(*p2 == 0) {
            p2++;
        } else {
            int temp = *p2;
            if(*p1 != 0) {
                p1++;
                p2++;
            } else {
                
                swapNumbers(p1, p2);
                p1++;
                p2++;
            }
        }
     }
}