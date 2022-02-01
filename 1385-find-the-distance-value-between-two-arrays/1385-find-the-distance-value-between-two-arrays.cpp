class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int n1 = arr1.size();
        int n2 = arr2.size();
        // int cnt =0;
        int cnt =0;
        // set<int>st;
        for(int i=0;i<n1;i++){
            // int cnt = 0;
            for(int j=0;j<n2;j++){
                if(abs(arr2[j]-arr1[i])<=d){
                    cnt++;
                    break;
                    // st.insert(arr2[j]);
                }
            }
            // ans = max(ans,cnt);
        }
        return arr1.size()-cnt;
    }
};