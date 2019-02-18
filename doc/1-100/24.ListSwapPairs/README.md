
# Problem 24 : ListSwapPairs

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/1-100/24.ListSwapPairs/problem.png"/>




## C++ Solution

```c++

static int x = []() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);              
    return 0;
}();


class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if (head != nullptr && head->next != nullptr){
            head->next->next = swapPairs(head->next->next);
            auto* second = head->next;
            head->next = second->next;
            second->next = head;
            return second;
        }
        return head;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public ListNode SwapPairs(ListNode head) {
        if (head != null && head.next != null){
            head.next.next = SwapPairs(head.next.next);
            ListNode second = head.next;
            head.next = second.next;
            second.next = head;
            return second;
        }
        return head;
    }
}

```

## Java Solution

```java

class Solution {
    public ListNode swapPairs(ListNode head) {
        if (head != null && head.next != null){
            head.next.next = swapPairs(head.next.next);
            ListNode second = head.next;
            head.next = second.next;
            second.next = head;
            return second;
        }
        return head;
    }
}

```

## Python Solution

```python

class Solution:
    def swapPairs(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        if head is not None and head.next is not None:
            head.next.next = self.swapPairs(head.next.next)
            second = head.next
            head.next = second.next
            second.next = head
            return second
        return head

```



