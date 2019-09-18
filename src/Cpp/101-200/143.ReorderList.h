
#ifndef __REORDER_LIST_H
#define __REORDER_LIST_H

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

class Solution {
public:
    void reorderList(ListNode* head) {
        if (head == nullptr || head->next == nullptr)
            return;
        ListNode* p1 = head;
        ListNode* p2 = head;
        // 找到链表的一半
        while (p2->next != nullptr && p2->next->next != nullptr) {
            p1 = p1->next;
            p2 = p2->next->next;
        }
        // 将链表分为两段
        p2 = p1->next;
        p1->next = nullptr;
        p1 = head;
        // 将后半段进行链表的翻转
        ListNode* head2 = p2;
        ListNode* next2;
        while (p2->next != nullptr) {
            next2 = p2->next;
            p2->next = next2->next;
            next2->next = head2;
            head2 = next2;
        }
        p2 = head2;
        // 两条链表进行合并
        ListNode* next1;
        while (p2 != nullptr) {
            next1 = p1->next;
            next2 = p2->next;
            p1->next = p2;
            p2->next = next1;
            p1 = next1;
            p2 = next2;
        }
    }
};

#endif
