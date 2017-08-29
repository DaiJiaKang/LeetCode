// LeetCode.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
//#include "TwoSum.h"
//#include "AddTwoNumbers.h"
//#include "ReverseInteger.h"
//#include "PalindromeNumber.h"
//#include "ContainerWithMostWater.h"
//#include "IntegertoRoman.h"
//#include "RomantoInteger.h"
#include "LongestCommonPrefix.h"


//int mainTwoSum()
//{
//	Solution s;
//	vector<int> vec = {2, 7, 4, 5};
//	vector<int> ans;
//	ans = s.twoSum(vec, 10);
//
//	//if (ans.size() > 0)
//	//{
//		for (auto at = ans.begin(); at != ans.end(); at++)
//			cout << *at << endl;
//	//}
//	
//
//	cout << "hello leetcode" << endl;
//	system("pause");
//    return 0;
//}

//int mainAddTwoNumbers()
//{
//	Solution s;
//	ListNode l1(9), l2(9);//, l3(3);
//	l1.next = &l2;
//	l2.next = nullptr;
//	//l2.next = &l3;
//	//l3.next = nullptr;
//
//	ListNode l4(1);//, l5(6), l6(4);
//	//l4.next = &l5;
//	//l5.next = &l6;
//	//l6.next = nullptr;
//
//	ListNode* res = nullptr;
//	res = s.addTwoNumbers(&l1, &l4);
//
//	while (res)
//	{
//		cout << res->val << endl;
//		res = res->next;
//	}
//
//	return 0;
//}

//int mainReverseInteger()
//{
//	Solution s;
//	int ans;
//	int num = -2147483648;
//	ans = s.reverse(num);
//	cout << ans << endl;
//
//	return 0;
//}

//int mainPalindromeNumber()
//{
//	Solution s;
//	cout << s.isPalindrome(2147447412) << endl;
//	return 0;
//}

//int mainContainerWithMostWater()
//{
//	Solution s;
//	vector<int> vec = { 3, 2, 1, 3 };
//	cout << s.maxArea(vec) << endl;
//
//	return 0;
//}

//int mainintToRoman()
//{
//	Solution s;
//	cout << s.intToRoman(44) << endl;
//
//	return 0;
//}

//int mainRomantoInteger()
//{
//	Solution s;
//	string str = "MCMXCVI";
//	cout << s.romanToInt(str) << endl;
//
//	return 0;
//}

int main()
{
	Solution s;
	vector<string> vecs = {"a", "b"};
	cout << s.longestCommonPrefix(vecs) << endl;

	return 0;

}