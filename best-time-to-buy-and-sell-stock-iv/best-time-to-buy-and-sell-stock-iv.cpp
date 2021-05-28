class Solution {
public:
    int maxProfit(int transactions, vector<int>& prices) {
       if(transactions == 0 || prices.size() <= 1) return 0;
        int buy[transactions][prices.size()];
        int sell[transactions][prices.size()];
        memset(buy,0,sizeof(buy));
        memset(sell,0,sizeof(sell));
        for(int i=0; i<transactions;i++) buy[i][0] = -prices[0];
        for(int i=1; i<prices.size(); i++) {
            int prevInvestment = 0;
            for(int j=0; j<transactions; j++) {
                buy[j][i] = max(buy[j][i-1], -prices[i] + prevInvestment);
                sell[j][i] = max(sell[j][i-1], buy[j][i-1] + prices[i]);
                prevInvestment = sell[j][i];
            }
        }
        int ret = 0;
        for(int i=0; i<transactions; i++) {
            ret = max(ret,sell[i][prices.size()-1]);
        }
        return ret;

    }
};