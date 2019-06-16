
#ifndef __REVERS_LINKED_LIST_II_H
#define __REVERS_LINKED_LIST_II_H

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
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        if (m == n) 
            return head;
        ListNode* dum = new ListNode(0);
        dum->next = head;
        ListNode* pre = dum;
        for (int i = 1; i < m; i++){
            pre = pre->next;  
        }
        head = pre->next;
        for (int i = m; i < n; i++){
            ListNode* nex = head->next;
            head->next = nex->next;
            nex->next = pre->next;
            pre->next = nex;
        }
        return dum->next;
    }
};

#endif
