bool checkString(char* s) {
    int length = strlen(s);
    for(int i = 1; i<length; i++) {
        if(s[i] < s[i-1]) {
            return false;
        }
    }
    return true;
}