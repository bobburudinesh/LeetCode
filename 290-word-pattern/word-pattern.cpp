class Solution {
public:
    bool wordPattern(string pattern, string s) {
        if(pattern.empty() || (pattern.length() < 1) || (pattern.length() > 300) || (s.length() < 1) || (s.length() > 3000)) {
            return false;
        }
        std::string token;
        std::vector<std::string> tokens;
        std::stringstream ss(s);

        while(ss >> token) {
            tokens.push_back(token);
        }
        if(tokens.size() != pattern.length()) {
            return false;
        }
        int i = 0;
        std::unordered_map<char, std::string> map1;
        std::unordered_map<std::string, char> map2;
        auto it_p = pattern.begin();
        auto it_tokens = tokens.begin();
        while((it_p < pattern.end()) && (it_tokens < tokens.end())) {
            
            if(map1.contains(*it_p)){
                if(map1[*it_p] != *it_tokens) {
                    return false;
                }
            } else if (map2.contains(*it_tokens)) {
                if(map2[*it_tokens] != *it_p) {
                    return false;
                }
            } else {
                map1.insert({*it_p, *it_tokens});
                map2.insert({*it_tokens, *it_p});
            }
            it_p++;
            it_tokens++;
        }

        if((it_p == pattern.end()) && (it_tokens == tokens.end())) {
            return true;
        }
        return false;



    }
};