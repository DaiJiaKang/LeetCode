#pragma once

#include "stdafx.h"
#include "c++lib.h"

struct ListNode 
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution 
{
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
	{
		ListNode* ans = new ListNode(0);
		ListNode* tmpans = ans;
		ListNode* pans = NULL;
		ListNode* pl1 = l1;
		ListNode* pl2 = l2;
		int jinwei = 0;
		while (nullptr != pl1 && nullptr != pl2)
		{
			pans = new ListNode(0);
			tmpans->next = pans;
			if (pl1->val + pl2->val + jinwei >= 10)
			{
				pans->val = pl1->val + pl2->val - 10 + jinwei;
				jinwei = 1;
			}
			else
			{
				pans->val = pl1->val + pl2->val + jinwei;
				jinwei = 0;
			}
			pl1 = pl1->next;
			pl2 = pl2->next;
			tmpans = tmpans->next;
		}
		if (jinwei > 0 && pl1 == nullptr && pl2 == nullptr)
		{
			jinwei = 0;
			pans = new ListNode(1);
			tmpans->next = pans;
		}
		while (nullptr != pl1)
		{
			pans = new ListNode(0);
			tmpans->next = pans;
			if (pl1->val + jinwei >= 10)
			{
				pans->val = pl1->val - 10 + jinwei;
				jinwei = 1;
			}
			else
			{
				pans->val = pl1->val + jinwei;
				jinwei = 0;
			}
			pl1 = pl1->next;
			tmpans = tmpans->next;
		}
		while (nullptr != pl2)
		{
			pans = new ListNode(0);
			tmpans->next = pans;
			if (pl2->val + jinwei >= 10)
			{
				pans->val = pl2->val - 10 + jinwei;
				jinwei = 1;
			}
			else
			{
				pans->val = pl2->val + jinwei;
				jinwei = 0;
			}
			pl2 = pl2->next;
			tmpans = tmpans->next;
		}
		if (jinwei > 0 && pl1 == nullptr && pl2 == nullptr)
		{
			jinwei = 0;
			pans = new ListNode(1);
			tmpans->next = pans;
		}
		return ans->next;
	}
};