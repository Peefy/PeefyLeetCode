
# problem 138 : CopyListWithRandomPointer

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/101-200/138.CopyListWithRandomPointer/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (head == nullptr) 
            return nullptr;
        Node* pre = new Node(0, nullptr, nullptr);
        Node* cur = head;
        Node* nex = nullptr;
        while (cur != nullptr){
            nex = cur->next;
            pre->next = cur;
            cur->next = new Node(cur->val, nullptr, nullptr);
            pre = cur->next;
            cur = nex;
        }
        cur = head;
        while (cur != nullptr){
            cur->next->random = cur->random != nullptr ? cur->random->next : nullptr;
            cur = cur->next->next;
        }
        cur = head;
        Node* res = head->next;
        while (cur->next != nullptr){
            nex = cur->next;
            cur->next = nex->next;
            cur = nex;
        }
        return res;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public Node CopyRandomList(Node head) {
        if (head == null) 
            return null;
        Node pre = new Node(0, null, null);
        Node cur = head;
        Node nex = null;
        while (cur != null){
            nex = cur.next;
            pre.next = cur;
            cur.next = new Node(cur.val, null, null);
            pre = cur.next;
            cur = nex;
        }
        cur = head;
        while (cur != null){
            cur.next.random = cur.random != null ? cur.random.next : null;
            cur = cur.next.next;
        }
        cur = head;
        Node res = head.next;
        while (cur.next != null){
            nex = cur.next;
            cur.next = nex.next;
            cur = nex;
        }
        return res;
    }
}

```

## Java Solution

```java

class Solution {
    public Node copyRandomList(Node head) {
        if (head == null) 
            return null;
        Node pre = new Node(0, null, null);
        Node cur = head;
        Node nex = null;
        while (cur != null){
            nex = cur.next;
            pre.next = cur;
            cur.next = new Node(cur.val, null, null);
            pre = cur.next;
            cur = nex;
        }
        cur = head;
        while (cur != null){
            cur.next.random = cur.random != null ? cur.random.next : null;
            cur = cur.next.next;
        }
        cur = head;
        Node res = head.next;
        while (cur.next != null){
            nex = cur.next;
            cur.next = nex.next;
            cur = nex;
        }
        return res;
    }
}

```

## Python Solution

```python

class Solution:
    def copyRandomList(self, head: 'Node') -> 'Node':
        if not head: return
        pre, cur = Node(0, None, None), head
        while cur:
            nex = cur.next
            pre.next = cur
            cur.next = Node(cur.val, None, None)
            pre = cur.next
            cur = nex
        cur = head
        while cur: 
            cur.next.random = cur.random.next if cur.random else None
            cur = cur.next.next
        cur, res = head, head.next
        while cur.next: 
            nex = cur.next
            cur.next = nex.next
            cur = nex
        return res

```


