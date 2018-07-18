
# problem 206 : ReverseList

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/201-300/206.ReverseList/problem.png"/>

## C++ Solution

```c++
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* node = head;
        ListNode* pre = nullptr;
        while (node != nullptr) {
            ListNode* next = node->next;
            node->next = pre;
            pre = node;
            node = next;
        }
        return pre;
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
}


```

## Python Solution

```python

class Solution:
    def reverseList(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        stack = []
        node = head
        while node != None:
            stack.append(node)
            node = node.next
        if len(stack) == 0:
            return None
        tail = stack.pop()
        node = tail
        head.next = None
        while len(stack) > 0:
            stacknode = stack.pop()
            node.next = stacknode
            node = stacknode
        return tail
        

```




