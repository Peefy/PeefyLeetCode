
#ifndef __QUICK_SORT_LIST_H
#define __QUICK_SORT_LIST_H

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
    ListNode* sortList(ListNode* head) {
        if (head == nullptr || head->next == nullptr) 
            return head;
        auto* slow = head;
        auto* fast = head->next; 
        while (fast != nullptr && fast->next != nullptr){
            fast = fast->next->next;
            slow = slow->next;
        }
        auto* mid = slow->next;
        slow->next = nullptr;
        auto* left = sortList(head);
        auto* right = sortList(mid);
        auto* res = new ListNode(0);
        auto* h = res;
        while (left != nullptr && right != nullptr){
            if (left->val < right->val){
                h->next = left;
                left = left->next;
            } 
            else{
                h->next = right;
                right = right->next;
            }
            h = h->next;
        }
        h->next = left != nullptr ? left : right;
        return res->next;
    }
};

#endif
