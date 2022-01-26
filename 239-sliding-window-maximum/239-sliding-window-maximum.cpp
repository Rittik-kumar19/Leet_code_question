class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>ans;
        list<int>l;
        int i = 0,j=0;
        if(k>nums.size()){
            ans.push_back(*max_element(l.begin(),l.end()));
            return ans;
        }
        while(j<nums.size()){
            while(l.size()>0 and l.back()<nums[j]){
                l.pop_back();
            }
            l.push_back(nums[j]);
            if((j-i+1)<k){
                j++;
            }
            else if(j-i+1 == k){
                ans.push_back(l.front());
                if(l.front()==nums[i]){
                    l.pop_front();
                }
                i++,j++;
            }
        }
        return ans;
    }
};