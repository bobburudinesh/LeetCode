class Solution {
public:
    string reverseVowels(string s) {
        auto p = s.begin();
        auto q = s.end() - 1;
        std::string vowels = "AEIOUaeiou";
        bool qIsVowel = false;
        bool pIsVowel = false;
        while(p <= q ) {
            if (vowels.find(*p) != std::string::npos) {
                pIsVowel = true;
            } else {
                pIsVowel = false;
            }
            if (vowels.find(*q) != std::string::npos) {
                qIsVowel = true;
            } else {
                qIsVowel = false;
            }
            if(!pIsVowel) {
                p++;
            }
            if(!qIsVowel) {
                q--;
            }
            if (pIsVowel&& qIsVowel) {
                cout << "Before: " << *p << " " << *q << ";"; 
                char c = *p;
                *p = *q;
                *q = c;
                cout << "After: " << *p << " " << *q << endl; 
                q--;
                p++;
            }
        }
        return s;
    }
};