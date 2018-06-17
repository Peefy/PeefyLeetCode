
#ifndef __CLIMB_STAIRS_H
#define __CLIMB_STAIRS_H

#include <iostream>
#include <vector>
#include <map>

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL){};
};

class Solution
{

  public:
    ListNode *deleteDuplicates(ListNode *head)
    {
        if (head == NULL)
            return NULL;
        ListNode *last = head;
        ListNode *node = head->next;
        while (node != NULL)
        {
            if (node->val == last->val)
                last->next = node->next;
            else
                last = node;
            node = node->next;
        }
        return head;
    }
};

#endif
