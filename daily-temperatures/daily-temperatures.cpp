class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        if(t.empty()) return t;
        
        int n = t.size();
        vector<int> vect(n,0);
        
        stack<pair<int,int>> s;
        s.push(make_pair(t.back(),n-1));
        
        for(int i=n-2;i>=0;--i)
        {
            while(!s.empty() && t[i] >= s.top().first)
            {
                s.pop();
            }
            
            if(s.empty())
            {
                s.push(make_pair(t[i],i));
            }
            else
            {
                vect[i] = s.top().second - i;
                s.push(make_pair(t[i],i));
            }
            
        }
        return vect;
    }
};