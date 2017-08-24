#pragma once

#include "stdafx.h"
#include "c++lib.h"

class Solution 
{
public:
	int reverse(long long int x) 
	{
		queue<int> ans;
		int n = 0;
		while (x != 0)
		{
			n = x % 10;
			ans.push(n);
			x = x / 10;
		}
		while (ans.size() > 0 && ans.front() == 0)
			ans.pop();
		long long int lint = 0;
		while (!ans.empty())
		{
			lint = lint * 10 + (long long int)ans.front();
			ans.pop();
		}
		long long int unint = (1 << 31) - 1;
		if (lint > unint || lint < -1 * (unint + 1))
			lint = 0;
		return lint;
	}
};