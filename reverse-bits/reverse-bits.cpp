class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        bitset<32>s(n);//array of 0/1
        string sst="";
        for(int i=31;i>=0;i--){
            char st=s[i]+'0';
            sst=sst+st;
            
        }
        reverse(sst.begin(),sst.end());
        bitset<32>b(sst);
        return b.to_ulong();
        
    }
};