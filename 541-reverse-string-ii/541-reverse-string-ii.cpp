class Solution {
public:
    string reverseStr(string s, int k) {
        string res = "";
        int i;int flag = 0;
        for(int i=0;i<s.size();){
            string temp = s.substr(i,k);
            if(flag == 0){
                reverse(temp.begin(),temp.end());
                flag = 1;
            }
            else{
                flag = 0;
            }
            res+=temp;
            i=i+k;
        }
        cout<<res<<endl;
        return res;
    }
};