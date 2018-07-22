
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
    bool isPalindrome(ListNode* head) {
        vector<int> stack;
        ListNode* node = head;
        while (node != NULL)
        {
            stack.push_back(node->val);
            node = node->next;
        }
        int count = stack.size();      
        for(size_t i = 0; i < count; i++)
        {
            if (stack[i] != stack[count - i - 1])
                return false;
        }
        return true;       
    }
};

#endif
