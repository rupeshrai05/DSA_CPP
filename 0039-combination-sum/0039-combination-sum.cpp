class Solution {
public:
    vector<vector<int>> ans;

    void backtrack(vector<int>& candidates, int target,
                   vector<int>& curr, int index) {
        if (target == 0) {
            ans.push_back(curr);
            return;
        }
        if (target < 0) return;

        for (int i = index; i < candidates.size(); i++) {
            curr.push_back(candidates[i]);
            backtrack(candidates, target - candidates[i], curr, i);
            curr.pop_back(); // backtrack
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> curr;
        backtrack(candidates, target, curr, 0);
        return ans;
    }
};