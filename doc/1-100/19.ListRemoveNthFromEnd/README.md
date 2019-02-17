
# Problem 19 : ListRemoveNthFromEnd

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/1-100/19.ListRemoveNthFromEnd/problem.png"/>

双指针 ： 一前一后可以统计出后第n个数

## C++ Solution

```c++

static int x = []() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);              
    return 0;
}();


class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        auto* ptr1 = head;
        auto* ptr2 = head;
        auto count = 0;
        while (ptr2->next){
            ptr2 = ptr2->next;
            count += 1;
            if (count > n)
                ptr1 = ptr1->next;
        }
        if (count >= n)
            ptr1->next = ptr1->next->next;
        else
            head = ptr1->next;
        return head;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public ListNode RemoveNthFromEnd(ListNode head, int n) {
        ListNode h = new ListNode(0);
        h.next = head;
        ListNode p = head;
        ListNode q = h;
        while (n > 0) {
            p = p.next;
            n -= 1;
        }
        while(p != null){
            p = p.next;
            q = q.next;
        }
        q.next = q.next.next;
        return h.next;
    }
}

```

## Java Solution

```java

class Solution {
    public ListNode removeNthFromEnd(ListNode head, int n) {
        ListNode h = new ListNode(0);
        h.next = head;
        ListNode p = head;
        ListNode q = h;
        while (n > 0) {
            p = p.next;
            n -= 1;
        }
        while(p != null){
            p = p.next;
            q = q.next;
        }
        q.next = q.next.next;
        return h.next;
    }
}

```

## Python Solution

```python

class Solution:
    def removeNthFromEnd(self, head, n):
        """
        :type head: ListNode
        :type n: int
        :rtype: ListNode
        """
        tail = head
        previous = head
        prior = head
        i = 1
        while i < n and tail.next:
            tail = tail.next
            i += 1
        if i == n:
            while tail.next:
                prior = previous
                previous = previous.next
                tail = tail.next
        if head is previous:
            head = previous.next
        else:
            prior.next = previous.next
        return head

```


