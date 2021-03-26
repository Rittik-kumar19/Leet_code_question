class Solution {
public:
    int trap(vector<int>& height) {
        
        int n=height.size();
        if(n==0){
            return 0;
        }
        int w[n];
        
        for(int i=0;i<n;i++){
            int maxl=-1;
            int maxr=-1;
            for(int j=0;j<=i;j++){
                maxl=max(height[j],maxl);
            }
            for(int k=i;k<n;k++){
                maxr=max(height[k],maxr);
            }
            w[i]=min(maxl,maxr)-height[i];
        }
        int sum=0;
        for(int i=0;i<n;i++){
            sum=sum+w[i];
        }
        return sum;
    }
};