class Solution {
public:
	int findLHS(vector<int>& nums) {
		unordered_map<int, int> tmp;
		int maxSub = 0;
		for (auto num: nums)
		{
			++tmp[num];
		}
		
		for (auto & [ num, value ]: tmp)
		{
			if ( tmp.end() != tmp.find(num - 1) )
				if( maxSub < tmp[num - 1] + value )
					maxSub = tmp[num - 1] + value;
		}
		return maxSub;
	}
};