
# Problem 86 : PartitionList

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/1-100/86.PartitionList/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* node = head;
        ListNode* smallstart = new ListNode(-1);
        ListNode* bigstart = new ListNode(-1);
        ListNode* smallnode = smallstart;
        ListNode* bignode = bigstart;
        while (node != nullptr){
            if (node->val < x){
                smallnode->next = node;
                smallnode = smallnode->next;
            }
            else{
                bignode->next = node;
                bignode = bignode->next;
            }
            node = node->next;
        }
        smallnode->next = bigstart->next;
        bignode->next = nullptr;        
        return smallstart->next;
    }
};

```

## C# Solution

```csharp

public class Solution
    {
        public ListNode Partition(ListNode head, int x)
        {
            ListNode node = head;
            ListNode smallstart = new ListNode(-1);
            ListNode bigstart = new ListNode(-1);
            ListNode smallnode = smallstart;
            ListNode bignode = bigstart;
            while (node != null)
            {
                if (node.val < x)
                {
                    smallnode.next = node;
                    smallnode = smallnode.next;
                }
                else
                {
                    bignode.next = node;
                    bignode = bignode.next;
                }
                node = node.next;
            }
            smallnode.next = bigstart.next;
            bignode.next = null;
            return smallstart.next;
        }
    }

```

## Java Solution

```java

class Solution {
    public ListNode partition(ListNode head, int x) {
        ListNode node = head;
        ListNode smallstart = new ListNode(-1);
        ListNode bigstart = new ListNode(-1);
        ListNode smallnode = smallstart;
        ListNode bignode = bigstart;
        while (node != null){
            if (node.val < x){
                smallnode.next = node;
                smallnode = smallnode.next;
            }
            else{
                bignode.next = node;
                bignode = bignode.next;
            }
            node = node.next;
        }
        smallnode.next = bigstart.next;
        bignode.next = null;        
        return smallstart.next;
    }
}

```

## Python Solution

```python

class Solution:
    def partition(self, head: ListNode, x: int) -> ListNode:
        node = head
        smallstart = ListNode(-1)
        bigstart = ListNode(-1)
        smallnode = smallstart
        bignode = bigstart
        while node is not None:
            if node.val < x:
                smallnode.next = node
                smallnode = smallnode.next
            else:
                bignode.next = node
                bignode = bignode.next
            node = node.next
        smallnode.next = bigstart.next
        bignode.next = None            
        return smallstart.next

```


