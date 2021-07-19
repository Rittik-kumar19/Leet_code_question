class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // sort(strs.begin().strs.end());
        sort(begin(strs), end(strs));
        string st=strs[0];
        int sz=st.size();
        string res="";
        for(int i=0;i<sz;i++){
            for(int j=0;j<strs.size();j++){
                if(strs[j].size()-1>=i && st[i]==strs[j][i] && j!=strs.size()-1){
                    continue;
                }
                else if(strs[j].size()-1>=i && j==strs.size()-1 && st[i]==strs[j][i]){
                    res+=st[i];
                }
                else if(strs[j].size()-1>=i && st[i]!=strs[j][i]){
                    return res;
                }
            }
        }
        return res;
    }
};