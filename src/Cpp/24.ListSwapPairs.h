
#ifndef __LIST_SWAP_PAIRS_H
#define __LIST_SWAP_PAIRS_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>
#include <stack>
#include <set>
#include <algorithm>

using namespace std;

struct ListNode {
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
    ListNode* swapPairs(ListNode* head) {
        if (head != nullptr && head->next != nullptr){
            head->next->next = swapPairs(head->next->next);
            auto* second = head->next;
            head->next = second->next;
            second->next = head;
            return second;
        }
        return head;
    }
};

#endif
