#include <string.h>
#include <stdio.h>
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int maxLen = 0, start = 0;
        int lastIndex[128] = {0}; // ASCII range

        for (int i = 0; i < n; i++) {
            if (lastIndex[s[i]] > start) {
                start = lastIndex[s[i]];
            }
            lastIndex[s[i]] = i + 1;
            maxLen = (i - start + 1 > maxLen) ? i - start + 1 : maxLen;
        }
        return maxLen;
    }
};