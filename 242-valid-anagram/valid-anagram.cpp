class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) {
            return false;
        }
        int i = 0;
        std::sort(s.begin(), s.end());
        std::sort(t.begin(), t.end());
        // for(int j=0; j < s.length(); j++) {
        //     i ^= static_cast<int>(s[j]) ^ static_cast<int>(t[j]);
        // }
        // return i == 0;
        return s.compare(t) == 0;
    }
};