
#ifndef __COPY_RANDOM_LIST_H
#define __COPY_RANDOM_LIST_H

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
    Node* copyRandomList(Node* head) {
        if (head == nullptr) 
            return nullptr;
        Node* pre = new Node(0, nullptr, nullptr);
        Node* cur = head;
        Node* nex = nullptr;
        while (cur != nullptr){
            nex = cur->next;
            pre->next = cur;
            cur->next = new Node(cur->val, nullptr, nullptr);
            pre = cur->next;
            cur = nex;
        }
        cur = head;
        while (cur != nullptr){
            cur->next->random = cur->random != nullptr ? cur->random->next : nullptr;
            cur = cur->next->next;
        }
        cur = head;
        Node* res = head->next;
        while (cur->next != nullptr){
            nex = cur->next;
            cur->next = nex->next;
            cur = nex;
        }
        return res;
    }
};

#endif
