
#ifndef __PARTITION_LIST_H
#define __PARTITION_LIST_H

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
    ListNode* partition(ListNode* head, int x) {
        ListNode* node = head;
        ListNode* smallstart = new ListNode(-1);
        ListNode* bigstart = new ListNode(-1);
        ListNode* smallnode = smallstart;
        ListNode* bignode = bigstart;
        while (node != nullptr){
            if (node->val < x){
                smallnode->next = node;
                smallnode = smallnode->next;
            }
            else{
                bignode->next = node;
                bignode = bignode->next;
            }
            node = node->next;
        }
        smallnode->next = bigstart->next;
        bignode->next = nullptr;        
        return smallstart->next;
    }
};

#endif
