class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        //int len = digits.size() + 1;
        std::vector<int> res;
        auto it = digits.end()-1;
        int carry = 0;
        if(((*it + 1) % 10) == 0) {
            res.push_back(0);
            carry = 1;
        } else {
            res.push_back(*it + 1);
        }
        --it;
        if(digits.size() == 1) {
            if(carry){
                res.push_back(carry);
            }
            
            
            std::reverse(res.begin(), res.end());
            return res;
        }
        while(it >= digits.begin()) {
            
            if(carry) {
                if(((*it + carry) % 10) == 0) {
                    res.push_back(0);
                    carry = 1;
                } else {
                    res.push_back(*it + carry);
                    carry = 0;
                }
            } else {
                res.push_back(*it);
                // if(((*it + 1) % 10) == 0) {
                //     res.push_back(0);
                //     carry = 1;
                // } else {
                //     res.push_back(*it);
                //     carry = 0;
                // }
                
            }
            --it;
        }
        
        if(carry){
            res.push_back(carry);
        }
        std::reverse(res.begin(), res.end());
        return res;

    }
};