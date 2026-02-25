class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if (n == 0) return 1;

        int result = 10;      // for n = 1
        int current = 9;     // first digit (1–9)
        int available = 9;   // remaining digits

        for (int i = 2; i <= n && available > 0; i++) {
            current *= available;
            result += current;
            available--;
        }

        return result;
    }
};