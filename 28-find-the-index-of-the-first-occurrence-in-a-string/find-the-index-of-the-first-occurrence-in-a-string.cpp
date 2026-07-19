class Solution {
public:
    int strStr(string haystack, string needle) {
        char* result = nullptr;
        result = strstr(haystack.data(), needle.data());
        if(!result) {
            return -1;
        } else {
            return (result - haystack.data());
        }
    }
};