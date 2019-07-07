
# problem 143 : ReorderList

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/101-200/143.ReorderList/problem.png"/>

1.快慢双指针找到链表中点
2.反转链表中点后的部分
3.合并链表中点前半部分和后半部分

## C++ Solution

```c++

class Solution {
public:
    void reorderList(ListNode* head) {
        if (head == nullptr || head->next == nullptr)
            return;
        ListNode* p1 = head;
        ListNode* p2 = head;
        // 找到链表的一半
        while (p2->next != nullptr && p2->next->next != nullptr) {
            p1 = p1->next;
            p2 = p2->next->next;
        }
        // 将链表分为两段
        p2 = p1->next;
        p1->next = nullptr;
        p1 = head;
        // 将后半段进行链表的翻转
        ListNode* head2 = p2;
        ListNode* next2;
        while (p2->next != nullptr) {
            next2 = p2->next;
            p2->next = next2->next;
            next2->next = head2;
            head2 = next2;
        }
        p2 = head2;
        // 两条链表进行合并
        ListNode* next1;
        while (p2 != nullptr) {
            next1 = p1->next;
            next2 = p2->next;
            p1->next = p2;
            p2->next = next1;
            p1 = next1;
            p2 = next2;
        }
    }
};

```

## C# Solution

```csharp

public class Solution {
    public void ReorderList(ListNode head) {
                if (head == null || head.next == null)
            return;
        ListNode p1 = head;
        ListNode p2 = head;
        // 找到链表的一半
        while (p2.next != null && p2.next.next != null) {
            p1 = p1.next;
            p2 = p2.next.next;
        }
        // 将链表分为两段
        p2 = p1.next;
        p1.next = null;
        p1 = head;
        // 将后半段进行链表的翻转
        ListNode head2 = p2;
        ListNode next2;
        while (p2.next != null) {
            next2 = p2.next;
            p2.next = next2.next;
            next2.next = head2;
            head2 = next2;
        }
        p2 = head2;
        // 两条链表进行合并
        ListNode next1;
        while (p2 != null) {
            next1 = p1.next;
            next2 = p2.next;
            p1.next = p2;
            p2.next = next1;
            p1 = next1;
            p2 = next2;
        }
    }
}

```

## Java Solution

```java

class Solution {
    public void reorderList(ListNode head) {
        if (head == null || head.next == null)
            return;
        ListNode p1 = head;
        ListNode p2 = head;
        // 找到链表的一半
        while (p2.next != null && p2.next.next != null) {
            p1 = p1.next;
            p2 = p2.next.next;
        }
        // 将链表分为两段
        p2 = p1.next;
        p1.next = null;
        p1 = head;
        // 将后半段进行链表的翻转
        ListNode head2 = p2;
        ListNode next2;
        while (p2.next != null) {
            next2 = p2.next;
            p2.next = next2.next;
            next2.next = head2;
            head2 = next2;
        }
        p2 = head2;
        // 两条链表进行合并
        ListNode next1;
        while (p2 != null) {
            next1 = p1.next;
            next2 = p2.next;
            p1.next = p2;
            p2.next = next1;
            p1 = next1;
            p2 = next2;
        }
    }
}

```

## Python Solution

```python

class Solution(object):
    def reverseList(self, head):
        prev = None
        while head is not None:
            next = head.next
            head.next = prev
            prev = head
            head = next
        return prev


    def reorderList(self, head):
        """
        :type head: ListNode
        :rtype: None Do not return anything, modify head in-place instead.
        """
        if head is None:
            return 
        slow = head
        fast = head.next
        while fast is not None and fast.next is not None:
            slow = slow.next
            fast = fast.next.next
        right = self.reverseList(slow.next)
        slow.next = None
        left = head
        while right is not None:
            next = right.next
            right.next = left.next
            left.next = right
            right = next
            left = left.next.next
        return left

```


