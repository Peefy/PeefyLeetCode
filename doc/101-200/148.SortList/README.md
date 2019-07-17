
# problem 148 : SortList

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/101-200/148.SortList/problem.png"/>

# 迭代版本的并归排序，空间复杂度要求O(1),所以不能使用函数递归

## C++ Solution

```c++

class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if (head == nullptr || head->next == nullptr) 
            return head;
        auto* slow = head;
        auto* fast = head->next; 
        while (fast != nullptr && fast->next != nullptr){
            fast = fast->next->next;
            slow = slow->next;
        }
        auto* mid = slow->next;
        slow->next = nullptr;
        auto* left = sortList(head);
        auto* right = sortList(mid);
        auto* res = new ListNode(0);
        auto* h = res;
        while (left != nullptr && right != nullptr){
            if (left->val < right->val){
                h->next = left;
                left = left->next;
            } 
            else{
                h->next = right;
                right = right->next;
            }
            h = h->next;
        }
        h->next = left != nullptr ? left : right;
        return res->next;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public ListNode SortList(ListNode head) {
        if (head == null || head.next == null)
            return head;
        ListNode fast = head.next, slow = head;
        while (fast != null && fast.next != null) {
            slow = slow.next;
            fast = fast.next.next;
        }
        ListNode tmp = slow.next;
        slow.next = null;
        ListNode left = SortList(head);
        ListNode right = SortList(tmp);
        ListNode h = new ListNode(0);
        ListNode res = h;
        while (left != null && right != null) {
            if (left.val < right.val) {
                h.next = left;
                left = left.next;
            } else {
                h.next = right;
                right = right.next;
            }
            h = h.next;
        }
        h.next = left != null ? left : right;
        return res.next;
    }
}

```

## Java Solution

```java

class Solution {
    public ListNode sortList(ListNode head) {
        if (head == null || head.next == null)
            return head;
        ListNode fast = head.next, slow = head;
        while (fast != null && fast.next != null) {
            slow = slow.next;
            fast = fast.next.next;
        }
        ListNode tmp = slow.next;
        slow.next = null;
        ListNode left = sortList(head);
        ListNode right = sortList(tmp);
        ListNode h = new ListNode(0);
        ListNode res = h;
        while (left != null && right != null) {
            if (left.val < right.val) {
                h.next = left;
                left = left.next;
            } else {
                h.next = right;
                right = right.next;
            }
            h = h.next;
        }
        h.next = left != null ? left : right;
        return res.next;
    }
}

```

## Python Solution

```python

class Solution:
    def sortList(self, head: ListNode) -> ListNode:
        if not head or not head.next: 
            return head 
        slow, fast = head, head.next
        while fast and fast.next:
            fast, slow = fast.next.next, slow.next
        mid, slow.next = slow.next, None 
        left, right = self.sortList(head), self.sortList(mid)
        h = res = ListNode(0)
        while left and right:
            if left.val < right.val: 
                h.next, left = left, left.next
            else: 
                h.next, right = right, right.next
            h = h.next
        h.next = left if left else right
        return res.next

```


