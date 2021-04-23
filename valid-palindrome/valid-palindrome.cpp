class Solution {
public:
    bool isPalindrome(string s) {
         if (s.empty())
            return true;
        
        int left = 0, right = s.size() - 1;
        while (left < right) {
            if (!isalpha(s[left]) && !isdigit(s[left])) {
                left++;
                continue;
            } 
            if (!isalpha(s[right]) && !isdigit(s[right])) {
                right--;
                continue;
            }
            if ((tolower(s[left])) != (tolower(s[right])))
                return false;
            
            left++;
            right--;
        }
        return true;
    }
};