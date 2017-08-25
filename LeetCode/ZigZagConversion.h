#pragma once

#include "stdafx.h"
#include "c++lib.h"

class Solution 
{
public:
	string convert(string s, int numRows) 
	{
		string ans;
		int index = 0;
		while (index < numRows)
		{
			for (; index < s.size(); index = index + numRows + 1)
				ans.push_back(s[index]);
			index++;
		}
		
	}
};