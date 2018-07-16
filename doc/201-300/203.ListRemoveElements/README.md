
# problem 203 : ListRemoveElements

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/201-300/203.ListRemoveElements/problem.png"/>


## C++ Solution

```c++

<<<<<<< HEAD

=======
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL){};
};

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* fake = new ListNode(-9999999);
        fake->next = head;
        ListNode* now = head; 
        head = fake;  
        ListNode* last = fake;
        while(now != NULL){
            if (now->val == val)
                last->next = now->next;
            else
                last = now;
            now = now->next;
        }  
        return head->next;
    }
};
>>>>>>> a6fb335398eb30a7c63b502e5fd9204b7dc405fe

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
        public ListNode RemoveElements(ListNode head, int val)
        {
            while (head != null && head.val == val)
            {
                head = head.next;
            }
            ListNode node = head;
            ListNode lastnode = head;
            while (node != null)
            {
                if (node.val == val)
                    lastnode.next = node.next;
                else
                    lastnode = node;
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
    public ListNode removeElements(ListNode head, int val) {
        while (head != null && head.val == val) {
            head = head.next;
        }
        ListNode node = head;
        ListNode lastnode = head;
        while (node != null) {
            if (node.val == val)
                lastnode.next = node.next;
            else
                lastnode = node;
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
    def removeElements(self, head, val):
        """
        :type head: ListNode
        :type val: int
        :rtype: ListNode
        """
        while head is not None and head.val == val:
            head = head.next
        node = head
        lastnode = head
        while node != None:
            if node.val == val:
                lastnode.next = node.next
            else:
                lastnode = node
            node = node.next
        return head

```




