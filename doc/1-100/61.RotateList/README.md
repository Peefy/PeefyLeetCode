
# Problem 61 ：RotateList

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/1-100/61.RotateList/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == nullptr)
            return head;
        int length = 0;
        auto slow = head;
        auto fast = head;
        while (fast != nullptr){
            length += 1;
            fast = fast->next;
        }
        fast = head;
        for (size_t i = 0; i < k % length; i++){
            fast = fast->next;
        }
        while (fast->next != nullptr){
            fast = fast->next;
            slow = slow->next;
        }
        fast->next = head;
        head = slow->next;
        slow->next = nullptr;
        return head;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public ListNode RotateRight(ListNode head, int k) {
        if (head == null) 
            return head;
        int n = 0;
        for (ListNode t = head; t != null; t = t.next)
            ++n;
        k %= n;
        if (k == 0) return head;
        ListNode fast = head, slow = head;
        for (int i = 0; i < k; ++i) fast = fast.next;
        while (fast.next != null){
            fast = fast.next;
            slow = slow.next;
        }       
        ListNode r = slow.next;
        fast.next = head;
        slow.next = null;
        return r;
    }
}

```

## Java Solution

```java

class Solution {
    public ListNode rotateRight(ListNode head, int k) {
        if (head == null) 
            return head;
        int n = 0;
        for (ListNode t = head; t != null; t = t.next)
            ++n;
        k %= n;
        if (k == 0) return head;
        ListNode fast = head, slow = head;
        for (int i = 0; i < k; ++i) fast = fast.next;
        while (fast.next != null){
            fast = fast.next;
            slow = slow.next;
        }       
        ListNode t = slow.next;
        fast.next = head;
        slow.next = null;
        return t;
    }
}

```

## Python Solution

```python

class Solution:
    def rotateRight(self, head: ListNode, k: int) -> ListNode:
        if head is None or k == 0:
            return head
        n = 0
        node = head
        lastnode = None
        while node is not None:
            lastnode = node
            node = node.next
            n += 1
        while k >= n:
            k %= n
        if k == 0:
            return head
        node2 = head
        noderotatebefore = None
        i = 0
        while i < n - k:
            noderotatebefore = node2
            node2 = node2.next
            i += 1
        noderotatebefore.next = None
        lastnode.next = head   
        return node2 

```


