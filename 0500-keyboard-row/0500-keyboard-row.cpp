class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<unordered_set<char>> rows = {
            {'q','w','e','r','t','y','u','i','o','p'},
            {'a','s','d','f','g','h','j','k','l'},
            {'z','x','c','v','b','n','m'}
        };
        vector<string> res;
        for (string word : words) {
            string w = word;
            transform(w.begin(), w.end(), w.begin(), ::tolower);
            for (auto row : rows) {
                bool ok = true;
                for (char c : w) {
                    if (!row.count(c)) {
                        ok = false;
                        break;
                    }
                }
                if (ok) {
                    res.push_back(word);
                    break;
                }
            }
        }
        return res;
    }
};