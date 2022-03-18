class Solution {
public:
    string removeDuplicateLetters(string s) {
        int lastIndex[26];// arrray to strore where the character last appeared
        for(int i=0;i<s.length();i++) lastIndex[s[i]-'a']=i;
        bool seen[26]; //array to store if we have already added the char into  
        for(int i=0;i<26;i++) seen[i]=false;          ////the final ans
        stack<int>  st;
        for(int i=0;i<s.length();i++)
        {
            int c=s[i]-'a';
            if(seen[c]) continue;//if we have already taken the char ,then continue .
            while(!st.empty()&&st.top()>c&&i<lastIndex[st.top()])  //if the top char of 
            {                                      //the stack is greater than the current character
                seen[st.top()]=false;  //then pop the top char , if the top char occurred 
                st.pop();                   //after this index also
            }
            st.push(c);
            seen[c]=true;
        }
		//the char remained in the stack is our answer . But it will be in reverse order
        string ans="";
        while(st.size()>0)
        {
            ans+=(char)(st.top()+97);
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};