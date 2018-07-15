
#ifndef __LIST_HAS_CYCLE_H
#define __LIST_HAS_CYCLE_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>
#include <stack>
#include <set>
#include <algorithm>

using namespace std;

/**
 * Definition for singly-linked list.
 * 
**/
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
  public:
    bool hasCycle(ListNode *head)
    {
        auto now = head;       
        while(now != NULL){
            auto next = now->next;       
            if (next == head) {
                return true;
            }
            now->next = head;
            now = next;          
        }
        return false;
    }
};

#endif
