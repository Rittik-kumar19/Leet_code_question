class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        
        for(int i = 0; i < tokens.size(); i++) {
            if(tokens[i] == "+" || tokens[i]=="-" || tokens[i]=="*" || tokens[i]=="/")                {
                // pop two elements
                int v1 = st.top();
                st.pop();
                int v2 = st.top();
                st.pop();
                
                // push result inside stack
                if(tokens[i]=="+") {
                    st.push(v2+v1);
                }
                else if(tokens[i]=="-") {
                    st.push(v2-v1);
                }
                else if(tokens[i]=="*") {
                    st.push(v2*v1);
                }
                else if(tokens[i]=="/") {
                    st.push(v2/v1);
                }
            }
            else {
                // operands are there 
                st.push(stoi(tokens[i]));
            }
        }
        return st.top();
    }
};