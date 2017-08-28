#pragma once

#include "stdafx.h"
#include "c++lib.h"

class Solution 
{
public:
	string intToRoman(int num) 
	{
		string ans = "";
		vector<int> vec =			{ 1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1 };
		vector<string> vecstr = { "M",  "CM", "D", "CD","C","XC","L","XL","X","IX","V","IV","I" };
		for (int i = 0; i < vec.size(); ++i)
		{
			while (num >= vec[i])
			{
				num -= vec[i];
				ans += vecstr[i];
			}
		}
		return ans;
	}
};