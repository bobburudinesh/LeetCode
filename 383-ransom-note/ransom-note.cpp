class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if((ransomNote.length() > magazine.length())) {
            return false;
        }
        std::unordered_map<char, int> map1;
        for (char c : magazine) {
            if(map1.contains(c)) {
                map1[c]++;
            } else {
                map1.insert({c, 1});
            }
        }
        for(char c : ransomNote) {

            if(map1.contains(c)) {
                if(map1[c] <= 0) {
                    return false;
                } else {
                    map1[c]--;
                }
                
            } else {
                return false;
            }
        }
        return true;
    }
};