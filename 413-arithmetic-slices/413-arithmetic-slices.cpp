class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& A) {
        if ( A.size() < 3 ) return 0;
        int res = 0, counter = 2, lastDif = A[1] - A[0], index = 2, len = A.size();
        
        for(; index < len; ++index)
        {
            if ( lastDif == A[index] - A[index - 1] )
                ++counter;
            else
            {
                if ( counter >= 3 )
                    res += (counter - 1) * (counter - 2) / 2;
                counter = 2;
                lastDif = A[index] - A[index - 1];
            }
        }
        if ( counter >= 3 )
            res += (counter - 1) * (counter - 2) / 2;
        return res;
    }
};