bool isPalindrome(char* s) {
    // char *start = s, *end = s;
    // while(start < end) {
    //     while((start < end) && !isalnum((*start))){
    //         start++;
    //     }
    //     while((start < end) && !isalnum((*end))){
    //         end--;
    //     }
    //     if(tolower(*start) == tolower(*end)){
    //         start++;
    //         end--;
    //     } else {
    //         return false;
    //     }

    // }
    // return true;
    int left = 0, right = 0;
    right = strlen(s) - 1;
    while(left < right) {
        while((left < right) && !isalnum(s[left])) left++;
        while((left < right) && !isalnum(s[right])) right--;
        if(tolower(s[left]) != tolower(s[right])) return false;
        left++;
        right--;
    }
    return true;
}