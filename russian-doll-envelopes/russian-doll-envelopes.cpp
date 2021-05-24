class Solution {
public:
    int maxEnvelopes(vector<vector<int>>& env) {
        sort(begin(env), end(env));
	vector<int> dp(env.size(), 1);
	for (int i = 0; i < env.size(); i++)
		for (int j = 0; j < i; j++)
			if (env[j][0] < env[i][0] && env[j][1] < env[i][1])
				dp[i] = max(dp[i], dp[j] + 1);
	return *max_element(begin(dp), end(dp));
    }
};