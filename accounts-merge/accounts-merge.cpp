class UnionFind {
    private:
        unordered_map<string, string> connection;
    public:
        void unions(string x, string y) {
            if(connection.count(x) == 0) {  // Creating x email if it is not present in the pool
                connection[x] = x;
            }
            if(connection.count(y) == 0) {  // Creating x email if it is not present in the pool
                connection[y] = y;
            }

            string par_x = find(x), par_y = find(y);
            connection[par_x] = par_y;  // Union operation
        }
    
        string find(string x) { // Finds the representative for email
            if(connection[x] != x)
                connection[x] = find(connection[x]);
            return connection[x];
        }
        
        bool isRepresentative(string s) {   // Returns true if it is the representative of the group
            return connection[s] == s;
        }
        
        vector<string> getGroupEmails(string remail) {  // Returns all the emails which has remail as representative
            vector<string> eList;
            for(auto email: connection)
                if(find(email.first) == remail) eList.push_back(email.first);
            return eList;
        }
};

class Solution {
public:
    vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) {
        UnionFind *unionFind = new UnionFind();
        unordered_map<string, string> owner;    // { email: name }
        
        for(auto &account: accounts) {
            for(int i = 1; i < account.size(); i++) {
                owner[account[i]] = account[0];
                unionFind->unions(account[i], account[1]);  // Union of all the emails in the account
            }
        }
        vector<vector<string>> res;
        for(auto itr: owner) {
            if(unionFind->isRepresentative(itr.first)) {    // If the email is rep
                vector<string> temp = unionFind->getGroupEmails(itr.first); // getting all the emails which map to rep
                sort(temp.begin(), temp.end()); // Sorting the emails
                temp.insert(temp.begin(), itr.second);  // Inserting the name at the beginning.
                res.push_back(temp);
            }
        }
        return res;
    }
};