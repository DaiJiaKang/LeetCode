#pragma once

#include "stdafx.h"
#include "c++lib.h"

class Solution 
{
public:
	vector<vector<int>> threeSum(vector<int>& nums) 
	{
		vector<vector<int> > ans;
		if (nums.size() == 0)
			return ans;
		vector<int> vec;
		sort(nums.begin(), nums.end());
		int front, index, back;
		for (index = 0; index < nums.size(); ++index)
		{
			int target = -nums[index];
			front = index + 1;
			back = nums.size() - 1;
			while (front < back)
			{
				int sum = nums[front] + nums[back];
				if (sum < target)	front++;
				else if (sum > target)	back--;
				else
				{
					vec.push_back(nums[front]);
					vec.push_back(nums[back]);
					vec.push_back(nums[index]);
					ans.push_back(vec);
					while (front < back && nums[front] == vec[0])	front++;
					while (front < back && nums[back] == vec[1])	back--;
					vec.clear();
				}
				while (index + 1 < nums.size() && nums[index + 1] == nums[index])	
					index++;
			}
		}
		return ans;
	}
};