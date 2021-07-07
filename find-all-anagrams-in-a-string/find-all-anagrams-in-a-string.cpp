class Solution 
{
public:
    vector<int> findAnagrams(string s, string p)
    {
        // Edge case
        if(s.length()<p.length())
        {
            return {};
        }
        vector<int>v; // v is the result vector
        vector<int>dict(26,0),aux(26,0); // dict stores the characters of p and
        // aux stores the characters of s.
        for(auto it:p)
        {
            dict[it-'a']++;
        }
        int i=0,j=0;
        //Intial filling of aux vector
        while(j<p.length())
        {
            aux[s[j]-'a']++;
            j++;
        }
        j--;
        while(j<s.length())
        {
            //If at any index the frequencies of the characters matches then
            //store this index in 'v' vector 
            if(aux==dict)
            {
                v.push_back(i);
            }
            // Sliding the window
            aux[s[i]-'a']--;
            if(j+1<s.length())
            {
                aux[s[j+1]-'a']++;
            }
            i++;
            j++;
        }
        return v;
    }
};