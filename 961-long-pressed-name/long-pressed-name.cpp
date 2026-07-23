class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        if(typed.length() < name.length()) {
            return false;
        }
        int p = 0; // name index
        int q = 0; // typed index
        int matched = 0; // typed index
        char last_seen;
        for(char c : typed) {
            if(c == name[p]) {
                last_seen = name[p];
                p++;
            } else {
                if(c == last_seen) {
                    continue;
                } else {
                    return false;
                }
            }
        }
        return (p == name.length());

    }
};