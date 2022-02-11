class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string res1 = "";
        string res2 = "";
        for(auto w:word1){
            res1+=w;
        }
        for(auto w1:word2){
            res2+=w1;
        }
        if(res1==res2){
            return true;
        }
        return false;
    }
};