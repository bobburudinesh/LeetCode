char* largestOddNumber(char* num) {
    int len = strlen(num);
    for(int i = len-1; i>=0; i--) {
        if((num[i] % 2) != 0) {
            return num;
        } else {
            num[i] = '\0';
        }
    }
    return num;
    
}