class Solution {
public:
    int hammingDistance(int x, int y) {
        bitset<32>s1(x);
        bitset<32>s2(y);
        int cnt = 0;
        for(int i=31;i>=0;i--){
            if(s1[i]^s2[i]){
                cnt++;
            }
        }
        return cnt;
    }
};