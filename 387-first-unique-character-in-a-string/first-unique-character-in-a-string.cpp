class Solution {
public:
    int firstUniqChar(string s) {
        std::unordered_map<char, int> map = {};
    
        for(int i = 0; i < s.length(); i++) {
            if (map.contains(s[i])) {
                map[s[i]] = -1;
            } else {
                map.insert({s[i], i});
            }
        }
        int idx = INT_MAX;
        for(const auto& pair : map) {
            if(pair.second != -1 ) {
                if(pair.second < idx) {
                    idx = pair.second;
                }
            }
        }
        return idx == INT_MAX ? -1 : idx;
    }
};