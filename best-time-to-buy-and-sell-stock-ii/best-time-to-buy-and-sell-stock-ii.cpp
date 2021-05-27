class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int bd=0;
        int sd=0;
        int prof=0;
        for(int i=1;i<prices.size();i++){
            if(prices[i]>=prices[i-1]){
                sd++;
            }
            else{
                prof+=prices[sd]-prices[bd];
                sd=bd=i;
            }
        }
        prof+=prices[sd]-prices[bd];
        return prof;
    }
};