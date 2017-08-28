#pragma once

#include "stdafx.h"
#include "c++lib.h"

class Solution 
{
public:
	int maxArea(vector<int>& height) 
	{
		int i = 0, j = height.size() - 1;
		int ans = 0;
		if (j - i == 1)
			ans = height[i] < height[j] ? height[i] : height[j];
		while (i < j)
		{
			int rongji = (j - i) * (height[i] < height[j] ? height[i] : height[j]);
			if (rongji > ans)
				ans = rongji;
			if (height[i] <= height[j])
			{
				i++;
				continue;
			}
			if (height[j] <= height[i])
			{
				j--;
				continue;
			}
			
		}
		return ans;
	}
};