
# Problem 24 : ListSwapPairs

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/1-100/24.ListSwapPairs/problem.png"/>




## C++ Solution

```c++



```

## C# Solution

```csharp



```

## Java Solution

```java



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



