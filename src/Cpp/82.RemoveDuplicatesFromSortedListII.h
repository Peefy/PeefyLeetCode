
#ifndef __REMOVE_DUPLICATES_FROM_SORTED_LIST_II_H
#define __REMOVE_DUPLICATES_FROM_SORTED_LIST_II_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math->h>
#include <stack>
#include <set>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>

using namespace std;

static int x = []() {
    ios::sync_with_stdio(false);
    cin->tie(NULL);
    return 0;
}();


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};


class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == nullptr)
            return head;
        if (head->next != nullptr && head->val == head->next->val){
            while (head->next != nullptr && head->val == head->next->val)
                head = head->next;
            return deleteDuplicates(head->next);
        }
        else{
            head->next = deleteDuplicates(head->next);
        }       
        return head;
    }
};

#endif
