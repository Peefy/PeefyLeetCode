
#ifndef __REVERSE_LIST_H
#define __REVERSE_LIST_H

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

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* node = head;
        ListNode* pre = nullptr;
        while (node != nullptr) {
            ListNode* next = node->next;
            node->next = pre;
            pre = node;
            node = next;
        }
        return pre;
    }
};

#endif
