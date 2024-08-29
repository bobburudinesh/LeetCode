class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.empty()) {
            return {};
        }
        sort(intervals.begin(), intervals.end(),[](const vector<int>& a, const vector<int>& b){
            return a[0]<b[0];
        }); 
        vector<vector<int>> result;
        result.push_back(intervals[0]);
        for(int i = 0; i<intervals.size(); i++) {
            vector<int>&  lastInterval = result.back();
            if(lastInterval[1] >= intervals[i][0] ) {
                if(lastInterval[1] >= intervals[i][1]) {
                    continue;
                }
                lastInterval[1] = intervals[i][1];

            } else {
                result.push_back(intervals[i]);
            }
        }
        return result;
        
    }
};