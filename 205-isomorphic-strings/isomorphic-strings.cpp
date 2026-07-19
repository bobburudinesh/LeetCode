class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length() != t.length()) {
            return false;
        }
        std::unordered_map<char,char> iso_map1;
        std::unordered_map<char,char> iso_map2;
        for(int i = 0; i < s.length(); i++) {
            if(iso_map1.contains(s[i])) {
                if(iso_map1[s[i]] != t[i]) {
                    return false;
                }
            } else {
                iso_map1.insert({s[i], t[i]});
            }
            if (iso_map2.contains(t[i])) {
                if(iso_map2[t[i]] != s[i]) {
                    return false;
                }
            } else {    
                iso_map2.insert({t[i], s[i]});
            }
        }

        return true;

    }
};