
#ifndef __ROTATE_LIST_H
#define __ROTATE_LIST_H

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

static int x = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == nullptr)
            return head;
        int length = 0;
        auto slow = head;
        auto fast = head;
        while (fast != nullptr){
            length += 1;
            fast = fast->next;
        }
        fast = head;
        for (size_t i = 0; i < k % length; i++){
            fast = fast->next;
        }
        while (fast->next != nullptr){
            fast = fast->next;
            slow = slow->next;
        }
        fast->next = head;
        head = slow->next;
        slow->next = nullptr;
        return head;
    }
};

#endif
