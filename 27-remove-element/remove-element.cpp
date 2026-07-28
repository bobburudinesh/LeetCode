class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        auto it = nums.begin();
        int count = 0;
        while(it != nums.end()) {
            if(*it == val) {
                it = nums.erase(it);
                continue;
            } else {
                count++;
            }
            it++;
        }
        return count;
    }
};