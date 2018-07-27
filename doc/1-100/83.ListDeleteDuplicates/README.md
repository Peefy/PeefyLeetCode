
# problem 83 : ListDeleteDuplicates

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/1-100/83.ListDeleteDuplicates/problem.png"/>

## C++ Solution

```c++

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL){};
};

class Solution
{

  public:
    ListNode *deleteDuplicates(ListNode *head)
    {
        if (head == NULL)
            return NULL;
        ListNode *last = head;
        ListNode *node = head->next;
        while (node != NULL)
        {
            if (node->val == last->val)
                last->next = node->next;
            else
                last = node;
            node = node->next;
        }
        return head;
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
    public class Solution
    {
        public ListNode DeleteDuplicates(ListNode head)
        {
            if (head == null)
                return null;
            ListNode last = head;
            ListNode node = head.next;
            while (node != null)
            {
                if (node.val == last.val)
                    last.next = node.next;
                else
                    last = node;
                node = node.next;
            }
            return head;
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
    public ListNode deleteDuplicates(ListNode head) {
        if (head == null)
            return null;
        ListNode last = head;
        ListNode node = head.next;
        while (node != null) {
            if (node.val == last.val)
                last.next = node.next;
            else
                last = node;
            node = node.next;
        }
        return head;
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
    def deleteDuplicates(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        if head is None:
            return
        lastnode = head
        node = head.next
        while node != None:
            if node.val == lastnode.val:
                lastnode.next = node.next
            else:
                lastnode = node
            node = node.next
        return head

```


