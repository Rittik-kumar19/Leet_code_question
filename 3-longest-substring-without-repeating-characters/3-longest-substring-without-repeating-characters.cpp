class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int length = 0;
        int max_length = 0;
        map<char,int> m;
        int i = 0;
        for(int j = 0;j<s.size();j++)
        {
            m[s[j]]++;
            if(m[s[j]] > 1)
            {
                max_length = max(max_length,length);
                while(m[s[j]] != 1)
                {
                    m[s[i]]--;
                    length--;
                    i++;
                }
            }
            length++;
        }
        max_length = max(max_length,length);
        return max_length;
    }
};