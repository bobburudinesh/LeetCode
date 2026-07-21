class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        std::unordered_map<char, int> map1;
        for (char c : magazine) {
            map1[c]++;
            
        }
        for(char c : ransomNote) {
            if(map1[c] >= 1) {
                map1[c]--;
            } else {
                return false;
            }
        }
        return true;
    }
};