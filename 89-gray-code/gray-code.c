/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int bin_grey(int n) {
    return n ^ (n >> 1);
} 
int* grayCode(int n, int* returnSize) {

    *returnSize = (1 << (n));
    int* result = (int*)malloc(sizeof(int) * (*returnSize));
    // base case
    if (n == 1) {
        result[0] = 0;
        result[1] = 1;
        return result;
    }
    int count = 0;
    while(count < (*returnSize)) {
         result[count] = bin_grey(count);
         
        printf("%d", bin_grey(count));
        count++;
    }
    
    return result;
}