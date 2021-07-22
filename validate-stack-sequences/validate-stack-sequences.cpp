class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int>s;
        int j=0;
        for(int e:pushed){
            s.push(e);
            while(s.size()>0 and s.top()==popped[j]){
                s.pop();
                j++;
            }
        }
        return j==popped.size();
    }
};