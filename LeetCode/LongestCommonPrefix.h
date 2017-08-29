#pragma once

#include "stdafx.h"
#include "c++lib.h"

class Solution 
{
public:
	string longestCommonPrefix(vector<string>& strs) 
	{
		string ans;
		bool enough = true;
		if (strs.size() > 0)
		{
			char ch = 0;
			for (int i = 0; i < strs[0].size(); ++i)
			{
				for (int j = 0; j < strs.size(); ++j)
				{
					ch = strs[0][i];
					if (i >= strs[j].size())
					{
						enough = false;
						break;
					}
					if (ch != strs[j][i])
					{
						enough = false;
						break;
					}
					if (j == strs.size() - 1 && ch == strs[j][i])
						ans.push_back(ch);
				}
				if (!enough)
					break;
			}
		}
		return ans;
	}
};