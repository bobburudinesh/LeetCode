class Solution {
public:
    string convertToTitle(int columnNumber) {
        std::string res = "";
        // 65 -> A ---> 1
        int ascii_base = static_cast<int>('A') - 1;
        int column_num = columnNumber;
        while(column_num) {
            int rem = column_num % 26;
            if(rem == 0) {
                res.append(1, 'Z');
            } else {
                res.append(1, static_cast<char>(ascii_base + rem));
            }
            column_num = (column_num - ((rem == 0) ? 26 : rem))/26;
        }
        std::reverse(res.begin(), res.end());
        return res;
    }
};