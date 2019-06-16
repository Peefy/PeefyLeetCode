
# problem 109 : ConvertSortedListToBinarySearchTree

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/101-200/109.ConvertSortedListToBinarySearchTree/problem.png"/>

## C++ Solution

```c++

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

```

## C# Solution

```csharp

public class Solution {
    public TreeNode SortedListToBST(ListNode head) {
        if (head == null)
            return null;
        if (head.next == null)
            return new TreeNode(head.val);
        // 双指针法找到链表中点
        ListNode slow = head;
        ListNode fast = head.next.next;
        while (fast != null && fast.next != null){
            fast = fast.next.next;
            slow = slow.next;
        }
        ListNode tmp = slow.next;
        slow.next = null;
        TreeNode root = new TreeNode(tmp.val);
        root.left = SortedListToBST(head);
        root.right = SortedListToBST(tmp.next);
        return root;
    }
}

```

## Java Solution

```java

class Solution {
    public TreeNode sortedListToBST(ListNode head) {
        if (head == null)
            return null;
        if (head.next == null)
            return new TreeNode(head.val);
        // 双指针法找到链表中点
        ListNode slow = head;
        ListNode fast = head.next.next;
        while (fast != null && fast.next != null){
            fast = fast.next.next;
            slow = slow.next;
        }
        ListNode tmp = slow.next;
        slow.next = null;
        TreeNode root = new TreeNode(tmp.val);
        root.left = sortedListToBST(head);
        root.right = sortedListToBST(tmp.next);
        return root;
    }
}

```

## Python Solution

```python

class Solution:

    def buildArrToBST(self, arr, left, right):
        if right - left == 1:
            rnode = TreeNode(arr[right])
            rnode.left = TreeNode(arr[left])
            return rnode
        if left == right:
            return TreeNode(arr[left])
        middle = (left + right) // 2
        node = TreeNode(arr[middle])
        node.left = self.buildArrToBST(arr, left, middle - 1)
        node.right = self.buildArrToBST(arr, middle + 1, right)
        return node

    def sortedListToBST(self, head: ListNode) -> TreeNode:
        if head is None:
            return
        arr = []
        n = 0
        while head is not None:
            arr.append(head.val)
            head = head.next
            n += 1 
        treenode = self.buildArrToBST(arr, 0, n - 1)
        return treenode

```


