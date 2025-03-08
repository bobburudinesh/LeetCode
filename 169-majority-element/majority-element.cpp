class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int size = nums.size();
        unordered_map<int, int> hmap;
        for(int i = 0; i< size; i++) {
            if(hmap[nums[i]] >= (size/2)) {
                return nums[i];
            }
            if(hmap.find(nums[i]) != hmap.end()) {
                hmap[nums[i]]++;
            } else {
                hmap[nums[i]] = 1;
            }
        }
        return 0;
    }
};