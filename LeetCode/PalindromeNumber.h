#pragma once

#include "stdafx.h"
#include "c++lib.h"

class Solution 
{
public:
	bool isPalindrome(int x) 
	{
		if (x < 0)
			return false;
		int sum = 0;
		int num = x;
		while (x != 0) {
			sum = sum * 10 + x % 10;
			x /= 10;
		}
		return num == sum;
	}
};