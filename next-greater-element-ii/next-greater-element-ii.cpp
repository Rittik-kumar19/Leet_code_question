class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int>v;
        stack<int>s;
        // for(int i=nums.size()-2;i>=0;i--){
        //     if(s.size()==0){
        //         continue;
        //     }
        //     else if(s.size()>0 and s.top()>nums[i]){
        //         continue;
        //     }
        //     else if(s.size()>0 and s.top()<=nums[i]){
        //         while(s.size()>0 and s.top()<=nums[i]){
        //             s.pop();
        //         }
        //     }
        //     s.push(nums[i]);
        // }
        for(int i=nums.size()-1;i>=0;i--){
            s.push(nums[i]);
        }
        for(int i=nums.size()-1;i>=0;i--){
            if(s.size()==0){
                v.push_back(-1);
            }
            else if(s.size()>0 and s.top()>nums[i]){
                v.push_back(s.top());
            }
            else if(s.size()>0 and s.top()<=nums[i]){
                while(s.size()>0 and s.top()<=nums[i]){
                    s.pop();
                }
                if(s.size()==0){
                    v.push_back(-1);
                }
                else{
                    v.push_back(s.top());
                }
            }
            s.push(nums[i]);
        }
        reverse(v.begin(),v.end());
        return v;
        
    }
};