class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        if(arr.size()==2){
            return true;
        }
       sort(arr.begin(),arr.end());
        int d = arr[1]-arr[0];
        for(int i=1;i<arr.size()-1;i++){
            int x = arr[i+1]-arr[i];
            if(x!=d){
                return false;
            }
        }
        return true;
        
    }
};