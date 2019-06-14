
# Problem 92 : ReverseLinkedListII

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/1-100/91.DecodeWays/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        if (m == n) 
            return head;
        ListNode* dum = new ListNode(0);
        dum->next = head;
        ListNode* pre = dum;
        for (int i = 1; i < m; i++){
            pre = pre->next;  
        }
        head = pre->next;
        for (int i = m; i < n; i++){
            ListNode* nex = head->next;
            head->next = nex->next;
            nex->next = pre->next;
            pre->next = nex;
        }
        return dum->next;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public ListNode ReverseBetween(ListNode head, int m, int n) {
        if (m == n) 
            return head;
        ListNode dum = new ListNode(0);
        dum.next = head;
        ListNode pre = dum;
        for (int i = 1; i < m; i++){
            pre = pre.next;  
        }
        head = pre.next;
        for (int i = m; i < n; i++){
            ListNode nex = head.next;
            head.next = nex.next;
            nex.next = pre.next;
            pre.next = nex;
        }
        return dum.next;
    }
}

```

## Java Solution

```java

class Solution {
    public ListNode reverseBetween(ListNode head, int m, int n) {
        if (m == n) 
            return head;
        ListNode dum = new ListNode(0);
        dum.next = head;
        ListNode pre = dum;
        for (int i = 1; i < m; i++){
            pre = pre.next;  
        }
        head = pre.next;
        for (int i = m; i < n; i++){
            ListNode nex = head.next;
            head.next = nex.next;
            nex.next = pre.next;
            pre.next = nex;
        }
        return dum.next;
    }
}

```

## Python Solution

```python

class Solution:
    def reverseBetween(self, head: ListNode, m: int, n: int) -> ListNode:
        if m == n:
            return head
        i = 1
        node = head
        beginnode = head
        tmp = None
        lastnode = None
        nextnode = None
        while node is not None:
            if i < m:
                lastnode = node
                nextnode = node.next
            elif i == m:
                beginnode = node
                nextnode = node.next
                node.next = tmp  
                tmp = node
            elif i < n:
                nextnode = node.next
                node.next = tmp  
                tmp = node
            elif i == n:
                beginnode.next = node.next
                node.next = tmp 
                if lastnode is None:
                    return node
                else:  
                    lastnode.next = node
                    return head
            i += 1
            node = nextnode
        return head

```


