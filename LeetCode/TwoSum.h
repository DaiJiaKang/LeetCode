#include "stdafx.h"
#include "c++lib.h"

class Solution 
{
public:
	vector<int> twoSum(vector<int>& nums, int target) 
	{
		vector<int> ans;
		for (int index = 0; index < nums.size(); index++)
		{
			for (int jndex = index + 1; jndex < nums.size(); jndex++)
			{
				if (target == nums[index] + nums[jndex])
				{
					ans.push_back(index);
					ans.push_back(jndex);
				}
			}
		}
		return ans;
	}
};