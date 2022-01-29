class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(),cost.end(),greater<int>());
        int n = cost.size();
        int res = 0;
        int ans1 = 0;
        if(n==1){
            return cost[0];
        }
        int ans2 = cost[n-1];
        int ans3 = cost[n-2]+cost[n-1];
        
        if((n%3==0)){
            for(int i=0;i<n;){
            ans1 = ans1+cost[i]+cost[i+1];
                 i=i+3;
//             if((i+3)<=n-1){
               
//             }
        }
        res =  ans1;
        }
        else if(n%3==1){
           for(int i=0;i<n-1;){
            ans2 = ans2+cost[i]+cost[i+1];
                i=i+3;
            // if((i+3)<=n-1){
            //     i=i+3;
            // }
        } 
         res = ans2;
        }
        else if(n%3==2){
           for(int i=0;i<n-2;){
            ans3 = ans3+cost[i]+cost[i+1];
                i=i+3;
            // if((i+3)<=n-1){
            //     i=i+3;
            // }
        } 
        res = ans3;
        }
        return res;
    }
};