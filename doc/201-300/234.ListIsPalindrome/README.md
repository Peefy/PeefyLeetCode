
# problem 234 : ListIsPalindrome

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/201-300/234.ListIsPalindrome/problem.png"/>

## C++ Solution

```c++
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> stack;
        ListNode* node = head;
        while (node != NULL)
        {
            stack.push_back(node->val);
            node = node->next;
        }
        int count = stack.size();      
        for(size_t i = 0; i < count; i++)
        {
            if (stack[i] != stack[count - i - 1])
                return false;
        }
        return true;       
    }
};

```

## C# Solution

```csharp

public class Solution {
    public ListNode ReverseList(ListNode head) {
        ListNode node = head;
        ListNode pre = null;
        while (node != null) {
            ListNode next = node.next;
            node.next = pre;
            pre = node;
            node = next;
        }
        return pre;
    }
        public ListNode findMiddle(ListNode head){
        ListNode slow = head;
        ListNode fast = head.next;
        while (fast != null && fast.next != null)
        {
            slow = slow.next;
            fast = fast.next.next;
        }
        return slow;
    }

    public bool IsPalindrome(ListNode head) {
        if (head == null) {
            return true;
        }
        ListNode middle = findMiddle(head);
        ListNode tail = middle.next;
        middle.next = null;
        ListNode p = head;
        ListNode second = ReverseList(tail);
        ListNode q = second;
        while (p != null && q != null){
            if (p.val != q.val)
                return false;
            p = p.next;
            q = q.next;
        }
        return true;
    }
}

```

## Java Solution

```java


class Solution {
    public ListNode reverseList(ListNode head) {
        ListNode node = head;
        ListNode pre = null;
        while (node != null) {
            ListNode next = node.next;
            node.next = pre;
            pre = node;
            node = next;
        }
        return pre;
    }

    public ListNode findMiddle(ListNode head){
        ListNode slow = head;
        ListNode fast = head.next;
        while (fast != null && fast.next != null)
        {
            slow = slow.next;
            fast = fast.next.next;
        }
        return slow;
    }

    public boolean isPalindrome(ListNode head) {
        if (head == null) {
            return true;
        }
        ListNode middle = findMiddle(head);
        ListNode tail = middle.next;
        middle.next = null;
        ListNode p = head;
        ListNode second = reverseList(tail);
        ListNode q = second;
        while (p != null && q != null){
            if (p.val != q.val)
                return false;
            p = p.next;
            q = q.next;
        }
        return true;
    }
}

```

## Python Solution

```python

class Solution:
    def isPalindrome(self, head):
        """
        :type head: ListNode
        :rtype: bool
        """
        stack = []
        node = head
        count = 0
        while node != None:
            stack.append(node.val)
            node = node.next
            count += 1
        for i in range(count):
            if stack[i] != stack[count - i - 1]:
                return False
        return True

```




