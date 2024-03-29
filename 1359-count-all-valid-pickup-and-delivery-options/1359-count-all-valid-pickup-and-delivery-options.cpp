const int MOD = 1e9 + 7;
class Solution
{
public:
    int countOrders(int n)
    {
        if (n == 1)
            return 1;
        return ((long long)countOrders(n - 1) * (2 * n - 1) * n) % MOD;
    }
};