class Solution {
public:
    int arrangeCoins(int n) {
        int l = 0, r = sqrt(n) * sqrt(2);
        while (l < r) {
            int m = l + (r - l + 1) / 2;
            int i = m, j = m + 1;
            int check = (i % 2 == 0 ? (i / 2 * j) : (j / 2 * i));
            if (check <= n) l = m;
            else r = m - 1;
        }
        return l;
    }
};