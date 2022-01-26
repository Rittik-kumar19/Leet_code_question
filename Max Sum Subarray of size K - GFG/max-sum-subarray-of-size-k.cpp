// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    int maximumSumSubarray(int K, vector<int> &Arr , int N){
        // code here 
        int i=0,j=0;
        int sum =0;
        int mx = INT_MIN;
        while(j<N){
            if((j-i+1)<K){
                sum+=Arr[j];
                j++;
            }
            else if((j-i+1)==K){
                sum = sum+Arr[j];
                mx=max(sum,mx);
                sum = sum-Arr[i];
                j++,i++;
                // sum = sum-Arr[i]
            }
        }
        return mx;
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
}   // } Driver Code Ends