class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        // to dos
        // 1. sort products lexicographically
        // 2. iterate through products and compare each char with searchWord 
        // 3. if char at index i same for both && number of products is below 3, add
        // let n = products.size(), m = product.size(), k = searchWord.size();
        // time: o(m*nlogn) + o(n*k) -> sorting lexicographically + traversing
        // space: o(k*3) == o(k) -> storing results
        
        vector<vector<string>> result(searchWord.size(), vector<string>{});
        sort(products.begin(), products.end());
        
        for (string p : products) {
            for (int i = 0; i < searchWord.size(); i++) {      
                if (p[i] != searchWord[i]) break;
                if (p[i] == searchWord[i] && result[i].size() < 3) {
                    result[i].push_back(p);
                } 
            }
        }
                        
        return result;
        
    }
};