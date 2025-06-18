

bool detectCapitalUse(char* word) {
    int length = strlen(word);
    int uppercount = 0, i = 0;
    while(i<length) {
        if(isupper(word[i])) {
            uppercount++;
        }
        i++;
    }
    if(uppercount == length)   return true;
    if(uppercount == 0) return true;
    if(uppercount == 1 && isupper(word[0])) return true;
    return false;
}