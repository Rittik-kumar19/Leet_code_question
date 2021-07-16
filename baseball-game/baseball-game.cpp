class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> vec; 
        for (auto& op : ops) {
            if (op == "+") {
                vec.push_back(vec[vec.size()-2] + vec[vec.size()-1]); 
            } else if (op == "D") {
                vec.push_back(vec.back() * 2); 
            } else if (op == "C") {
                vec.pop_back(); 
            } else {
                vec.push_back(stoi(op)); 
            }
        }
        return accumulate(vec.begin(), vec.end(), 0); 
    }
};