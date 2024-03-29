class Solution {
public:
    string fractionToDecimal(int nu, int de) {
        
        if (nu == 0)  return "0";
        string res;
        unordered_map<long long int, int> mp;
        bool flag = ((nu < 0 && de >= 0) || (nu >= 0 && de < 0));
        long long numerator = nu;
        long long denominator = de;
        numerator = abs(numerator);
        denominator = abs(denominator);
        
        long long dividend = numerator/denominator;
        long long rem = numerator%denominator;
        res = std::to_string(dividend);
        
        if(rem == 0)
            return (flag ? '-' + res : res);
        
        res.push_back('.');
        while(rem != 0)
        {
            numerator = rem*10;
            if(mp.find(numerator) != mp.end())
            {
                int p = mp[numerator];
                res = res.substr(0,p) + '(' + res.substr(p) + ')';
                break;
            }
            
            mp[numerator] = res.size();
            dividend = numerator/denominator;
            res.push_back(dividend+'0');
            rem = numerator%denominator;
        }
        
        if(flag)
            res.insert(res.begin(), '-');
        return res;
    }
};