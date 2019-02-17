
#ifndef __FOUR_SUM_H
#define __FOUR_SUM_H

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        auto* ptr1 = head;
        auto* ptr2 = head;
        auto count = 0;
        while (ptr2->next){
            ptr2 = ptr2->next;
            count += 1;
            if (count > n)
                ptr1 = ptr1->next;
        }
        if (count >= n)
            ptr1->next = ptr1->next->next;
        else
            head = ptr1->next;
        return head;
    }
};

#endif
