
#ifndef __INSERTION_SORT_LIST_H
#ifndef __INSERTION_SORT_LIST_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>
#include <stack>
#include <set>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>

using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};


class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        ListNode* dummy = new ListNode(0);
        while(head != nullptr){
            ListNode* cur = dummy;
            ListNode* next = head->next;
            while(cur->next != nullptr && cur->next->val < head->val){
                cur = cur->next;
            }
            head->next = cur->next;
            cur->next = head;
            head = next;
        }
        return dummy->next;
    }
};

#endif
