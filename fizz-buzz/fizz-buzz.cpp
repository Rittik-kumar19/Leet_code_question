class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string>st;
        for(int i=1;i<=n;i++){
            if(i%3==0 && i%5==0){
                st.push_back("FizzBuzz");
            }
            else if(i%3==0){
                st.push_back("Fizz");
            }
            else if(i%5==0){
                st.push_back("Buzz");
            }
            else {
                int j=i;
                string ss=to_string(j);
                st.push_back(ss);
            }
        }
        return st;
    }
};