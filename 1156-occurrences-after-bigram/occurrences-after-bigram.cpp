class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        vector<string> ans;
        vector<string> words;

        stringstream ss(text);
        string word, prev, preprev;

        while(ss >> word)
        {
            if (preprev == first && prev == second)
                ans.push_back(word);
            
            preprev = prev;
            prev = word;
        }

        return ans;
    }
};