class Solution {
public:
    int findComplement(int num) {
      int x = floor(double(log2(num)))+1;
        cout<<x<<endl;
      int p = (1ll<<x)-1;
      int ans = (num ^ p);
        return ans;
    }
};