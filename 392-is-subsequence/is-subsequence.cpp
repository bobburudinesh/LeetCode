class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0;
        int sLen = s.length();
        for(char c : t) {
            if(s[i] == c) {
                i++;
            }

        }
        if(i == sLen) {
            return true;
        } else {
            return false;
        }
    }
};