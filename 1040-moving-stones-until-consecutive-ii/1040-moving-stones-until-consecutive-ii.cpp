class Solution {
public:
    vector<int> numMovesStonesII(vector<int>& stones) {
        int n = stones.size();
        sort(stones.begin(), stones.end());

        // ---------- MAX MOVES ----------
        int maxMoves = max(
            stones[n-1] - stones[1] - (n - 2),
            stones[n-2] - stones[0] - (n - 2)
        );

        // ---------- MIN MOVES ----------
        int minMoves = n;
        int i = 0;

        for (int j = 0; j < n; j++) {
            while (stones[j] - stones[i] + 1 > n) {
                i++;
            }

            int alreadyPlaced = j - i + 1;

            // Special case
            if (alreadyPlaced == n - 1 &&
                stones[j] - stones[i] + 1 == n - 1) {
                minMoves = min(minMoves, 2);
            } else {
                minMoves = min(minMoves, n - alreadyPlaced);
            }
        }

        return {minMoves, maxMoves};
    }
};