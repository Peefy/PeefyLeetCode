
#ifndef __GET_INTERSECTION_NODE_H
#define __GET_INTERSECTION_NODE_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>
#include <stack>
#include <set>
#include <algorithm>
#include <stdint.h>

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

static int x = []() {
    ios::sync_with_stdio(false); // cin与stdin禁止同步
    cin.tie(NULL);               //cin与cout解除绑定
    return 0;
}();

class Solution
{
  public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        auto nodeA = headA;
        auto nodeB = headB;    
        while(nodeA != nodeB){
            nodeA = nodeA == NULL ? headB : nodeA->next;
            nodeB = nodeB == NULL ? headA : nodeB->next;
        }
        return nodeA;      
    }
};

#endif
