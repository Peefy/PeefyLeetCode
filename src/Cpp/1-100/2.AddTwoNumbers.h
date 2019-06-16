
#ifndef __LIST_HAS_CYCLE_H
#define __LIST_HAS_CYCLE_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>
#include <stack>
#include <set>
#include <algorithm>

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

static int x = []() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);              
    return 0;
}();

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        auto* ptr = l1;
        int carry = 0;
        while (true){
            l1->val = l1->val + l2->val + carry;
            carry = l1->val / 10;
            l1->val = l1->val % 10;
            if (l1->next != nullptr || l2->next != nullptr || carry){
                if(l1->next == nullptr)
                    l1->next = new ListNode(0);
                l1 = l1->next;
                if(l2->next == nullptr)
                    l2->next = new ListNode(0);
                l2 = l2->next;
            }
            else
                break;
        }
        return ptr;
    }
};

#endif
