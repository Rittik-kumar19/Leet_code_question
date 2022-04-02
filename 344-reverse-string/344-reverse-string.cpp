class Solution {
public:
    void reverseString(vector<char>& s) {
        int i = 0 , j = s.size()-1;
        while(i<j){
            char temp = s[i];
            s[i] = s[j];
            s[j] = temp;
            i++;
            j--;
        }
        // int n=s.size();
        // for(int i=0;i<n/2;i++){
        //     swap(s[i],s[n-1-i]);
        // }
        // cout<<"[";
        // for(int i=0;i<n-1;i++){
        //    cout<<s[i]<<",";
        // }
        // cout<<s[n-1]<<","<<"]";
    }
};