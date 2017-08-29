#pragma once

#include "stdafx.h"
#include "c++lib.h"

class Solution 
{
public:
	static int Roma(char ch)
	{
		int data = 0;
		switch (ch)
		{
		case 'I':
			data = 1;
			break;
		case 'V':
			data = 5;
			break;
		case 'X':
			data = 10;
			break;
		case 'L':
			data = 50;
			break;
		case 'C':
			data = 100;
			break;
		case 'D':
			data = 500;
			break;
		case 'M':
			data = 1000;
			break;
		}
		return data;
	}
	int romanToInt(string s) 
	{
		int ans = Solution::Roma(s[0]);
		for (int i = 1; i < s.size(); ++i)
		{
			if (Solution::Roma(s[i]) <= Solution::Roma(s[i - 1]))
			{
				ans += Solution::Roma(s[i]);
			}
			else
			{
				ans = ans - 2 * Solution::Roma(s[i - 1]) + Solution::Roma(s[i]);
			}
		}
		return ans;
	}
};