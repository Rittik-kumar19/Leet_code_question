class Solution {
public:
    int minAddToMakeValid(string s) {
       stack<char>st;
        for(int i=0;i<s.size();i++){
            if(st.size()==0){
                st.push(s[i]);
            }
            else if(st.size()>0 and st.top()=='('){
                if(s[i]==')'){
                    st.pop();
                }
                else if(s[i]=='('){
                    st.push('(');
                }
            }
            else if(st.size()>0 and st.top()==')'){
                st.push(s[i]);
            }
        }
        return st.size();
        
    }
};