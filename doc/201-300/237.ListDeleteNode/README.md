
# problem 237 : ListDeleteNode

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/201-300/237.ListDeleteNode/problem.png"/>

## C++ Solution

```c++

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL){};
};

class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val = node->next->val;
        node->next = node->next->next;
    }
};

```

## C# Solution

```csharp

    public class ListNode
    {
        public int val;
        public ListNode next;
        public ListNode(int x) { val = x; }
    }
    public class Solution {
    public void DeleteNode(ListNode node) {
        node.val = node.next.val;
        node.next = node.next.next;
    }
}   

```

## Java Solution

```java
public class ListNode {
    int val;
    ListNode next;
    ListNode(int x) { val = x; }
}

class Solution {
    public void deleteNode(ListNode node) {
        node.val = node.next.val;
        node.next = node.next.next;
    }
}


```

## Python Solution

```python

class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None

class Solution:
    def deleteNode(self, node):
        """
        :type node: ListNode
        :rtype: void Do not return anything, modify node in-place instead.
        """
        first = node
        last = node
        while first.next is not None:
            first.val = first.next.val
            last = first
            first = first.next
        last.next = None

```




