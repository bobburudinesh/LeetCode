class Solution {
public:
    string convertToTitle(int columnNumber) {
        std::string res = "";
        // 65 -> A ---> 1
        int ascii_base = static_cast<int>('A') - 1;  //handing 1 based indexing based on Ascii value
        
        while(columnNumber) {
            int rem = columnNumber % 26;
            if(rem == 0) {
                res.append(1, 'Z');
            } else {
                res.append(1, static_cast<char>(ascii_base + rem));
            }
            columnNumber = (columnNumber - ((rem == 0) ? 26 : rem))/26;
        }
        std::reverse(res.begin(), res.end());
        return res;
    }
};