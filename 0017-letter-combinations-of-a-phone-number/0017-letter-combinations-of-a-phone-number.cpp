class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};
        
        vector<string> mapping = {
            "", "", "abc", "def", "ghi",
            "jkl", "mno", "pqrs", "tuv", "wxyz"
        };
        
        vector<string> result = {""};
        
        for (char digit : digits) {
            vector<string> temp;
            for (char ch : mapping[digit - '0']) {
                for (string s : result) {
                    temp.push_back(s + ch);
                }
            }
            result = temp;
        }
        
        return result;
    }
};