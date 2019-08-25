
#ifndef __CONVERT_SORT_LIST_TO_BINARY_TREE_H
#ifndef __CONVERT_SORT_LIST_TO_BINARY_TREE_H

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


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


class Solution {
public:
    TreeNode* sortedListToBST(ListNode* head) {
        if (head == nullptr)
            return nullptr;
        if (head->next == nullptr)
            return new TreeNode(head->val);
        // 双指针法找到链表中点
        ListNode* slow = head;
        ListNode* fast = head->next->next;
        while (fast != nullptr && fast->next != nullptr){
            fast = fast->next->next;
            slow = slow->next;
        }
        ListNode* tmp = slow->next;
        slow->next = nullptr;
        TreeNode* root = new TreeNode(tmp->val);
        root->left = sortedListToBST(head);
        root->right = sortedListToBST(tmp->next);
        return root;
    }
};

#endif
