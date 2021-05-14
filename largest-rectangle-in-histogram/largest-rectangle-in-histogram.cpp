class Solution {
public:
     vector<int> getNextSmaller(const vector<int>& heights) {
        stack<int> st;
        vector<int> res(heights.size(), heights.size());
        for (int i = 0; i < heights.size(); ++i) {
            while (!st.empty() && heights[st.top()] > heights[i]) {
                res[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }
        
        return res;
    }
    // exactly the same as above except for the order
    // and the default element here is -1 (assume the the smaller element is before the start of the array)
    vector<int> getPrevSmaller(const vector<int>& heights) {
        stack<int> st;
        vector<int> res(heights.size(), -1);
        for (int i = heights.size() - 1; i >= 0; --i) {
            while (!st.empty() && heights[st.top()] > heights[i]) {
                res[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }
        
        return res;
    }
    
    int largestRectangleArea(vector<int>& heights) {
        if (heights.size() == 0) return 0;
        
        auto nextSmaller = getNextSmaller(heights);
        auto prevSmaller = getPrevSmaller(heights);
        
        int res = 0;
        for (int i = 0; i < heights.size(); ++i) {
            int r = nextSmaller[i];
            int l = prevSmaller[i];
            res = max(res, heights[i]*(r - l - 1));
        }
        
        return res;
    }
};