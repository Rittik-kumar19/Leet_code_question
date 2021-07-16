class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> res;
        for(int i=1;i<=target.back();i++)
        {
            res.push_back("Push");
            if(!count(target.begin(),target.end(),i))
                res.push_back("Pop");
        }
        return res;
    }
};