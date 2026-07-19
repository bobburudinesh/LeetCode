class Solution {
public:
    int titleToNumber(string columnTitle) {
        auto col_it = columnTitle.end();
        int res = 0;
        int i = 0;
        do {
            col_it--;
            res += ((static_cast<int>(*col_it - 'A')) + 1 ) * pow(26, i);
            i++;
        } while(col_it != columnTitle.begin());
        return res;
    }
};