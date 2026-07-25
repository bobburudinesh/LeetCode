class Solution {
public:
    int longestPalindrome(string s) {
        std::unordered_map <char, int> map;
        for(char c : s) {
            map[c]++;
        }
        int len = 0;
        bool odd_present = false;
        for(auto m : map) {
            len += (m.second/2) * 2;
            if(m.second & 0x1) {
                odd_present = true;
            }
        }
        
        

        return len + (odd_present ? 1 : 0);
    }
};