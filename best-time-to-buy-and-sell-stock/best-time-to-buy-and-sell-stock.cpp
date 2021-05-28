class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int maxpro=0;
        int minPrice=INT_MAX;
        for(int i=0;i<prices.size();i++){
            minPrice=min(minPrice,prices[i]);
            maxpro=max(maxpro,prices[i]-minPrice);
        }
        return maxpro;
    }
};