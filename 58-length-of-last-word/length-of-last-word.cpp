class Solution {
public:
    int lengthOfLastWord(string s) {
        char* token = std::strtok(s.data(), " ");
        std::string delims = " "; 
        int res = 0;
        while(token != nullptr) {
            res = std::strlen(token);
            token = std::strtok(nullptr, delims.c_str());
        }
        
        return res;
    }
};