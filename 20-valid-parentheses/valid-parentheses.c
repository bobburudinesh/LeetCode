#define MAX 10000
char getClosingBracket(char openingBracket) {
    if(openingBracket == '(') {
        return ')';
    } else if (openingBracket == '[') {
        return ']';
    } else {
        return '}';
    }
}
bool isValid(char* s) {
    int i = 0, length = strlen(s), j = 0;
    if(length < 2) {
        return false;
    }
    char arr[length] = {};
    bool result = true;
    while(i<length) {
        if(s[i] == '(' || s[i] == '{' || s[i] == '[') {
            arr[j] = s[i];
            j++;
        } else {
            if(j>0) {
                char temp = arr[j-1];
                j--;
                if(getClosingBracket(temp) != s[i]) {
                    result = false;
                    break;
                }
            } else {
                result = false;
                break;
            }
            
        }
        i++;
    }
    if(j!=0) {
        result = false;
    }
    return result;
}