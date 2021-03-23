class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int>vnew;
        priority_queue<pair<int,int>>maxh;
        for(int i=0;i<arr.size();i++){
            // if((arr[i]-x)==0){
            //     continue;
            // }
            maxh.push({abs((arr[i]-x)),arr[i]});
            if(maxh.size()>k){
                maxh.pop();
            }
        }
        while(k>0){
            vnew.push_back(maxh.top().second);
            maxh.pop();
            k--;
        }
        sort(vnew.begin(),vnew.end());
        return vnew;
    }
};