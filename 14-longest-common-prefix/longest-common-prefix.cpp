class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        std::string res = "";
        sort(strs.begin(), strs.end());
        int n = strs.size();
        std::string first = strs[0];
        std::string last = strs[n-1];

        for(int i = 0; i < min(first.length(), last.length()); i++) {
            if(first[i] != last[i]) {
                return res;
            }
            res += first[i];
        }

        return res;
    }
};