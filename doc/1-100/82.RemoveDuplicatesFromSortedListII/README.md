
# Problem 82 : RemoveDuplicatesFromSortedListII

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/1-100/82.RemoveDuplicatesFromSortedListII/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == nullptr)
            return head;
        if (head->next != nullptr && head->val == head->next->val){
            while (head->next != nullptr && head->val == head->next->val)
                head = head->next;
            return deleteDuplicates(head->next);
        }
        else{
            head->next = deleteDuplicates(head->next);
        }       
        return head;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public ListNode DeleteDuplicates(ListNode head) {
        if (head == null)
            return head;
        if (head.next != null && head.val == head.next.val)
        {
            while (head.next != null && head.val == head.next.val)
                    head = head.next;
            return DeleteDuplicates(head.next);
        }
        else
        {
            head.next = DeleteDuplicates(head.next);
        }
        return head;
    }
}

```

## Java Solution

```java

class Solution {
    public ListNode deleteDuplicates(ListNode head) {
        if (head == null)
            return head;
        if (head.next != null && head.val == head.next.val) {
            while (head.next != null && head.val == head.next.val)
                head = head.next;
            return deleteDuplicates(head.next);
        } else {
            head.next = deleteDuplicates(head.next);
        }
        return head;
    }
}

```

## Python Solution

```python

class Solution:
    def deleteDuplicates(self, head: ListNode) -> ListNode:
        if not head:
            return head
        if head.next and head.val == head.next.val:
            while head.next != None and head.val == head.next.val:
                head = head.next
            return self.deleteDuplicates(head.next)
        else:
            head.next = self.deleteDuplicates(head.next)
        return head

```


