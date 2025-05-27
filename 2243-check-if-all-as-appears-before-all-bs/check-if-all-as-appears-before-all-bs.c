bool checkString(char* s) {
    int length = strlen(s);
    for(int i = 1; i<length; i++) {
        printf("i: %d, %c < %c\n", i, s[i], s[i-1]);
        if(s[i] < s[i-1]) {
            return false;
        }
    }
    // if(s[length-1] < s[length-2]) {
    //         return false;
    // }
    return true;
}