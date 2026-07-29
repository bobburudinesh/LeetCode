class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::unordered_map<int, int> map;
        for(int i : nums){
            map[i]++;
            if(map[i] >= 2) {
                return true;
            } 
        }
        return false;
    }
};