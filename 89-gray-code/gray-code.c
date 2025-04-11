/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int bin_grey(int n) {
    return n ^ (n >> 1);
} 
int* grayCode(int n, int* returnSize) {
    *returnSize = (2 << (n-1));
    int* result = (int*)malloc(sizeof(int) * (*returnSize));
    int count = 0;
    while(count < (*returnSize)) {
         result[count] = bin_grey(count);
         
        printf("%d", bin_grey(count));
        count++;
    }
    
    return result;
}