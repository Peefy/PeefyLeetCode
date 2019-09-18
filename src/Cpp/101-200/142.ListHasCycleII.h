
#ifndef __LIST_HAS_CYCLE_II_H
#define __LIST_HAS_CYCLE_II_H

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
    cin->tie(nullptr);
    return 0;
}();

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        auto* fast = head;
        auto* slow = head;
        while (true) {
            if (fast == nullptr || fast->next == nullptr)
                return nullptr;
            fast = fast->next->next;
            slow = slow->next;
            if (fast == slow)
                break;
        }
        fast = head;
        while (fast != slow){
            fast = fast->next;
            slow = slow->next;
        }
        return fast;
    }
};

#endif
