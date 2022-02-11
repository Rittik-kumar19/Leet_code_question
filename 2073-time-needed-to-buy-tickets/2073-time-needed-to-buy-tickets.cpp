class Solution {
public:
    int timeRequiredToBuy(vector<int>& t, int k) {
        int n = t.size();
        int secs = 0;
        while(t[k]>0){
            for(int i=0;i<n;i++){
                if(t[i]){
                    t[i]--;
                    secs++;
                    if(t[k]==0){
                        return secs;
                    }
                }
            }
        }
        return secs;
    }
};