#include <string.h>
int romanToInt(char* s) {
        int length = strlen(s);
        if(length > 15 || length < 1) {
            return 0;
        }
        int values[26] = {0};
        values['I' - 'A'] = 1;
        values['V' - 'A'] = 5;
        values['X' - 'A'] = 10;
        values['L' - 'A'] = 50;
        values['C' - 'A'] = 100;
        values['D' - 'A'] = 500;
        values['M' - 'A'] = 1000;
        int num = 0;
        
        for(int i = 0; i<length; i++) {
            int current = values[s[i] - 'A'];
            int next = ((i+1) < length) ? values[s[i+1] - 'A'] : 0;
            if(current < next) {
                num -= current;
            } else {
                num += current;
            }
        }
        return num;
}