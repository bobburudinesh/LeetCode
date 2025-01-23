class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result = {};
        vector<int> temp = {};
        for(int i=0; i<numRows; i++) {
            temp.push_back(1);
            for (int j = 0; j<i; j++) {
                
                if(j == (i-1)) {
                    temp.push_back(1);
                } else {
                    int tempValue = result[i-1][j] + result[i-1][j+1];
                    temp.push_back(tempValue);
                }
                
            }

            result.push_back(temp);
            temp = {};

        }
        return result;
    }
};