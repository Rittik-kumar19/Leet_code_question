class Solution {
public:
/* remove all prev. found greater prices than the current price , as the current price would be the min. and nearest to the next prices [towards right side] */
    vector<int> finalPrices(vector<int>& prices) {
        stack<int> stk;
        for(int i=prices.size()-1; i>=0; i--) {
             if(stk.empty()) {
                 stk.push(prices[i]);
             }else {    
                 while(!stk.empty() && stk.top()>prices[i]) stk.pop();  // pop until top price is less than current price 
                 int cur=prices[i];
                 if(!stk.empty()) prices[i]-=stk.top(); // use discount as min. is avaliable
                 stk.push(cur); // push the current price on the stack 
             }
        } 
        return prices;
    }   
};