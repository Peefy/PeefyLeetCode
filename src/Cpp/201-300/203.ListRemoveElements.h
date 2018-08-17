
#ifndef __LIST_DELETE_DUPLICATES_H
#define __LIST_DELETE_DUPLICATES_H

#include <iostream>
#include <vector>
#include <map>

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL){};
};

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* fake = new ListNode(-9999999);
        fake->next = head;
        ListNode* now = head; 
        head = fake;  
        ListNode* last = fake;
        while(now != NULL){
            if (now->val == val)
                last->next = now->next;
            else
                last = now;
            now = now->next;
        }  
        return head->next;
    }
};

#endif
