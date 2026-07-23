class Solution {
public:
    char findTheDifference(string s, string t) {
        int sLen = s.length();
        if(sLen == 0) {
            return t[0];
        }
        int res = static_cast<int>(s[0]);
        for(int i = 1; i < sLen; i++) {
            res ^= static_cast<int>(s[i]);
        }
        for(int i = 0; i < t.length(); i++) {
            res ^= static_cast<int>(t[i]);
        }
        return static_cast<char>(res);
    }
};