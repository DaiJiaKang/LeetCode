// LeetCode.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "TwoSum.h"

int main()
{
	Solution s;
	vector<int> vec = {2, 7, 4, 5};
	vector<int> ans;
	ans = s.twoSum(vec, 10);

	//if (ans.size() > 0)
	//{
		for (auto at = ans.begin(); at != ans.end(); at++)
			cout << *at << endl;
	//}
	

	cout << "hello leetcode" << endl;
	system("pause");
    return 0;
}

