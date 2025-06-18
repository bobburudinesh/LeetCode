typedef enum {
    case1,
    case2,
    case3
} capitalCases;

bool detectCapitalUse(char* word) {
    int length = strlen(word);
    if(length < 2) {
        return true;
    }
    int i = 0;
    bool capital = true;
    capitalCases capitalcases = case1;
    if(word[0]>= 'a' && word[0]<='z') {
        capitalcases = case2;
    } else if (word[0]>= 'A' && word[0]<='Z') {
        if(word[1]>= 'A' && word[1]<='Z') {
            capitalcases = case1;
        } else {
            capitalcases = case3;
        }
    }
    i = 1;
    while(i<length) {
        switch(capitalcases) {
            case case1:
                
                if(word[i] < 'A' || word[i] > 'Z') {
                    
                    capital = false;
                    break;
                }
            break;
            default:
                if(word[i] < 'a' || word[i] > 'z') {
                    printf("%c\n", word[i]);
                    capital = false;
                    break;
                }
                break;
        }
       i++;
    }
    return capital;
}