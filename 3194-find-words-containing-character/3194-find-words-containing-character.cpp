class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int>ans;
        // using count in string
        for(int i =0;i<words.size(); i++){
            string res = words[i];
            if(count(res.begin(),res.end(),x)>0){
                ans.push_back(i);
            }

        }
        return ans;
    }
};