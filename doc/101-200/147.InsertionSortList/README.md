
# problem 147 : InsertionSortList

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/101-200/147.InsertionSortList/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        ListNode* dummy = new ListNode(0);
        while(head != nullptr){
            ListNode* cur = dummy;
            ListNode* next = head->next;
            while(cur->next != nullptr && cur->next->val < head->val){
                cur = cur->next;
            }
            head->next = cur->next;
            cur->next = head;
            head = next;
        }
        return dummy->next;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public ListNode InsertionSortList(ListNode head) {
        ListNode dummy = new ListNode(0); 
        while(head != null){
            ListNode cur = dummy;
            ListNode next = head.next;
            while(cur.next != null && cur.next.val < head.val){
                cur = cur.next;
            }
            head.next = cur.next;
            cur.next = head;
            head = next;
        }
        return dummy.next;
    }
}

```

## Java Solution

```java

class Solution {
    public ListNode insertionSortList(ListNode head) {
        ListNode dummy = new ListNode(0);
        
        while(head != null){
            ListNode cur = dummy;
            ListNode next = head.next;
            while(cur.next != null && cur.next.val < head.val){
                cur = cur.next;
            }
            head.next = cur.next;
            cur.next = head;
            head = next;
        }
        return dummy.next;
    }
}

```

## Python Solution

```python

class Solution:
    def insertionSortList(self, head):
        dummy = ListNode(0)
        while head is not None:
            cur = dummy
            next = head.next
            while cur.next is not None and cur.next.val < head.val:
                cur = cur.next
            head.next = cur.next
            cur.next = head
            head = next
        return dummy.next

```


